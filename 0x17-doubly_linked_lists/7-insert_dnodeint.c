#include "lists.h"

/**
 * init_dnodeint - initializes a node for a struct dlistint_s.
 * @n: The valuse to assign to the node element n.
 * @next: The value to assigne to the node element next.
 * @prev: The value to assigne to the node element prev.
 *
 * Return: The node address (success), NULL (faliure).
 */
dlistint_t *init_dnodeint(int n, dlistint_t *next, dlistint_t *prev)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = prev;
	new->next = next;

	return (new);
}

/**
 * insert_dnodeint_at_index - insetes a node at a specific index in a list.
 * @h: The address of the head pointer of the list.
 * @idx: The index the node is going to be inserted.
 * @n: The value of the n element of the new node.
 *
 * Return: The address of the inserted node (success), NULL (error).
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *next = NULL, *prev = NULL;
	size_t index;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	for (index = 0, prev = *h; prev != NULL; prev = prev->next, index++)
	{
		if (index == idx - 1)
		{
			next = prev->next;
			new = init_dnodeint(n, next, prev);
			prev->next = new;
			if (next != NULL)
				next->prev = new;
			return (new);
		}
	}
	return (NULL);
}

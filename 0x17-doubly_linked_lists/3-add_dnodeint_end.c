#include "lists.h"

/**
 * init_local_dnodeint - initializes a node for a struct dlistint_s.
 * @n: The valuse to assign to the node element n.
 * @next: The value to assigne to the node element next.
 * @prev: The value to assigne to the node element prev.
 *
 * Return: The node address (success), NULL (faliure).
 */
dlistint_t *init_local_dnodeint(int n, dlistint_t *next, dlistint_t *prev)
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
 * add_dnodeint_end - adds a node at the end of a list type of dlistint_t.
 * @head: The address of the pointer that holdes the head of the list.
 * @n: The value to assigne to the new nodes element.
 *
 * Return: The address of the new node (success), NULL (error).
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *cnt = NULL;

	if (head == NULL)
		return (NULL);
	new = init_local_dnodeint(n, NULL, NULL);
	if (new == NULL)
		return (NULL);
	for (cnt = *head; ; cnt = cnt->next)
	{
		if (cnt == NULL)
		{
			*head = new;
			return (new);
		}
		if (cnt->next == NULL)
		{
			cnt->next = new;
			new->prev = cnt;
			return (new);
		}
	}
}

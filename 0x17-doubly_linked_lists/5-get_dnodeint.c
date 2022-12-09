#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at given index form a given list.
 * @head: The head of the list.
 * @index: The index of the node.
 *
 * Return: The address of the node (success), NULL (error).
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t idx;

	if (head == NULL)
		return (NULL);
	for (idx = 0; head != NULL; head = head->next, idx++)
	{
		if (idx == index)
			return (head);
	}
	return (NULL);
}

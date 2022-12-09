#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node from a list.
 * @head: Address of the head pointer of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 (success), -1 (error).
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t idx;
	dlistint_t *next = NULL, *prev = NULL, *self = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	for (self = *head, idx = 0; self != NULL; self = self->next, idx++)
	{
		if (idx == index)
		{
			next = self->next;
			prev = self->prev;
			if (next != NULL)
				next->prev = prev;
			if (prev != NULL)
				prev->next = next;
			if (index == 0)
				*head = next;
			free(self);
			return (1);
		}
	}
	return (-1);
}

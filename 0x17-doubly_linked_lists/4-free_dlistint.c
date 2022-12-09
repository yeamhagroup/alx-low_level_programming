#include "lists.h"

/**
 * free_dlistint - frees a memory that is held by a list type of dlistint_t.
 * @head: The head of the list.
 *
 * Return: Void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	if (head == NULL)
		return;
	for ( ; head != NULL; head = tmp)
	{
		tmp = head->next;
		free(head);
	}
}

#include "lists.h"

/**
 * sum_dlistint - adds all the @n elemenst in every node.
 * @head: The head of the list.
 *
 * Return: The sum of the elements.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for ( ; head != NULL; head = head->next)
		sum = sum + head->n;
	return (sum);
}

#include "lists.h"

/**
 * print_dlistint - print a list kind of dlistint.
 * @h: The head of the list.
 *
 * Return: The length of the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);
	for (len = 0; h != NULL; h = h->next, len++)
		printf("%d\n", h->n);
	return (len);
}

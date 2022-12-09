#include "lists.h"

/**
 * dlistint_len - measures the length of a dlistint_t list type.
 * @h: The head of the list.
 *
 * Return: The length of the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	for (len = 0; h != NULL; h = h->next)
		len++;
	return (len);
}

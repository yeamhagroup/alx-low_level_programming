#include "lists.h"

/**
 * add_dnodeint - adds a node at the beggining of a list type of dlistint_t
 * @head: The address of the head pointer.
 * @n: The value to assign to the new node element.
 *
 * Return: The address of the new element (success), NULL (error).
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}

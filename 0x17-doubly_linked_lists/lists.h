#ifndef LIST_H
#define LIST_H

/* Standard libraries */

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: pointes to the previous node.
 * @next: pointes to the next node.
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *);
size_t dlistint_len(const dlistint_t *);
dlistint_t *add_dnodeint(dlistint_t **, const int);
dlistint_t *add_dnodeint_end(dlistint_t **, const int);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **, unsigned int, int n);
dlistint_t *init_dnodeint(int n, dlistint_t *, dlistint_t *);
int delete_dnodeint_at_index(dlistint_t **, unsigned int);


#endif

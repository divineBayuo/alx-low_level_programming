#ifndef LISTS_H
#define LISTS_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint - singly linked list
 * @n: integer input for list
 * @next: pointer to the next node
 *
 * Description: structure for singly-linked list node
 */
typedef struct listint
{
	unsigned int n;
	struct listint *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);


#endif /* LISTS_H */

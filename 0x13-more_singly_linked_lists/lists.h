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

#endif /* LISTS_H */

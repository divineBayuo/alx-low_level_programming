#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list
 * @h: pointer to the list in memory
 * Return: the number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t num_elements = 0;

	while (h != NULL)
	{
		if (h == NULL)
			num_elements = 1;
		h = h->next;
		num_elements++;
	}
	return (num_elements);
}

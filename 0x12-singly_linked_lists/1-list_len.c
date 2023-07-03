#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to the elements in a linked list
 * Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t num_elements;

	num_elements = 0;

	while (h != NULL)
	{
		if (h == NULL)
			num_elements = 1;
		h = h->next;
		num_elements++;
	}
	return (num_elements);
}

#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function that prints all the
 * elements of a listint_t
 * @h: pointer to the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_elements;

	num_elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_elements++;
	}
	return (num_elements);
}

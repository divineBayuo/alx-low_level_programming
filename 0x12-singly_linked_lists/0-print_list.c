#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: list whose  elements are to be printed
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num_elements;

	num_elements = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num_elements++;
	}
	return (num_elements);
}

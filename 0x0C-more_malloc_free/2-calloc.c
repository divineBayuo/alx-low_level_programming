#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: elements of array
 * @size: number of bytes of the elements
 * Return: pointer to the allocated memory,
 * NULL if size/nmemb = 0, or when calloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	unsigned int a, lim;

	if (nmemb == 0 || size == 0)
		return (NULL);

	lim = nmemb * size;

	new = malloc(lim);
	if (new == NULL)
		return (NULL);

	for (a = 0; a < lim; a++)
		new[a] = 0;

	return (new);
}

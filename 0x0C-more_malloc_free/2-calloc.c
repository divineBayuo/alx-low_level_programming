#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: number of bytes
 *
 * Return: NULL if malloc fails || nmemb/size = 0
 *	else, return pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *filler;
	unsigned int ind;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);

	filler = memory;

	for (ind = 0; ind < (nmemb * size); ind++)
		filler[ind] = '\0';

	return (memory);
}

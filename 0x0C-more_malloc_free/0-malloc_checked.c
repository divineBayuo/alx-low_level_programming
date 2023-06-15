#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(sizeof(b));
	if (new == NULL)
		return (98);

	return (new);
}

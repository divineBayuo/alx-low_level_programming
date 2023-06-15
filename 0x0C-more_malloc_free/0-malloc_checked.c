#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: pointer to allocated memory, else exit
 * with status value of 98
 */

void *malloc_checked(unsigned int b)
{
	char *new;

	new = malloc(b);
	if (new == NULL)
		exit(98);

	return (new);
}

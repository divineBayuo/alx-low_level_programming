#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char
 *
 * @size: size of the array
 * @c: characters entered
 *
 * Return: Always Success (0)
 */

char *create_array(unsigned int size, char c)
{
	char *c_array;
	unsigned int a;

	if (size == 0)
		return (NULL);

	c_array = malloc(sizeof(c) * size);

	if (c_array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		c_array[a] = c;

	return (c_array);
}

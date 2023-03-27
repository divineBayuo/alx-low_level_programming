#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 *		and initializes it with a specific char
 *
 * @size: size of the array
 * @c: content of the array
 *
 * Return: NULL if size = 0
 *	else pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		array[a] = c;

	return (array);
}

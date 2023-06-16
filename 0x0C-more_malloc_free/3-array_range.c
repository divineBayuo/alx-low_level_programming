#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value of the array of integers
 * @max: maximum value of the array of integers
 * Return: pointer to the newly created array,
 * NULL if malloc fails, and min>max
 */

int *array_range(int min, int max)
{
	char *new;
	unsigned int a;

	if (min > max)
		return (NULL);

	new = malloc(sizeof(*new) * (max - min) + 1);
	if (new == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		new[a] = min;

	return (new);
}

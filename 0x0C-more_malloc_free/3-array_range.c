#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value in the array
 * @max: maximum value in the array
 *
 * Return: NULL if min > max || malloc fails
 *	else, pointer to new array
 */

int *array_range(int min, int max)
{
	int *arr;
	unsigned int index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		arr[index] = min++;

	return (arr);
}

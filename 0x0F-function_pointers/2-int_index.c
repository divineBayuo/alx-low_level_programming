#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array of elements
 * @size: size of the array
 * @cmp: function pointer to function
 *
 * Return: index of the first element for which cmp
 * does not return 0, if no element matches, return -1,
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}

	return (-1);
}

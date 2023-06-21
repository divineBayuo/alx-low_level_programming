#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array of elements
 * @size: size of the array
 * @cmp: function pointer to function
 *
 * Return: no return
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
				return (i);
		}
	}

	return (-1);
}

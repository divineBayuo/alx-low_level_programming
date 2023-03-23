#include "function_pointers.h"

/**
 * int_index - function pointer that executes a function
 * that searches for a pointer
 *
 * @array: array to be inputed as parameter
 * @size: size of array
 * @cmp: pointer to the function to be executed
 *
 * Return: -1 if no element matches || if size <= 0
 * else return the index of the first element for which
 * cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (ind = 0; ind < size; ind++)
	{
		if (cmp(array[ind]) != 0)
			return (ind);
	}

	return (-1);
}

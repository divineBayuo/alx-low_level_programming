#include "function_pointers.h"

/**
 * int_index - function pointer that executes a function
 * that searches for a pointer
 *
 * @array: array to be inputed as parameter
 * @size: size of array
 * @cmp: pointer to the function to be executed
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL)
		return;

	while (size-- > 0)
	{
		cmp(*array);
		array++;
	}
}

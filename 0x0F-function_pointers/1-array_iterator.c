#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array of elements
 * @size: size of the array
 * @action: function pointer to function
 *
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && action)
		for (a = 0; a < size; a++)
			action(array[a]);
}

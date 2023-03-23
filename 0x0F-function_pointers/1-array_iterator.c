#include "function_pointers.h"

/**
 * array_iterator - function pointer that executes a function 
 * given as a parameter on each element of an array
 *
 * @name: name to be printed
 * @f: pointer to a function that prints a name
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (name == NULL || f == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}

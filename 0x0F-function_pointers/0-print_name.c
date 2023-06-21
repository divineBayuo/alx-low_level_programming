#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: function pointer to print function
 *
 * Return: no return
 */

void print_name(char *name, void (*f)(char *)
{
	if (name && f)
		f(name);
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: other parameters passed to the function
 *
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(strings, char *));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

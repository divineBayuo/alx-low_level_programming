#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print strings, followed by new line.
 * @separator: The string to be printed between strings.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *		If one of the strings if NULL, nil is printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *s;
	unsigned int ind;

	va_start(strings, n);

	for (ind = 0; ind < n; ind++)
	{
		s = va_arg(strings, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

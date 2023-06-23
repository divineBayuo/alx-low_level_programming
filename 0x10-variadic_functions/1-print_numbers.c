#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: other paramaters passed to the function
 *
 * Return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;

	va_start(num, n);

	unsigned int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(num, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}

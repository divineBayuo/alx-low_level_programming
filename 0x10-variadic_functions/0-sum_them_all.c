#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum
 * of all its parameters
 * @n: first parameter
 * @...: variable number of parameters
 *
 * Return: sum, 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int a, sum = 0;

	va_start(args, n);

	for (a = 0; a < n; a++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}

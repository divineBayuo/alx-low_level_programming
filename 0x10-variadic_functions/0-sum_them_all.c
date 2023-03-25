#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Function that returns sum of all the parameters
 * @n: Number of parameters passed to function
 * @...: Variable number of parameters to the function
 *
 * Description: 0 if n == 0, else sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int ind, sum = 0;

	va_start(args, n);

	for (ind = 0; ind < n; ind++)
		sum = sum + va_arg(args, int);

	va_end(args);

	return (sum);
}

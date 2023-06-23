/*
 * File: 0-sum_them_all.c
 * Auth: Divine Bayuo
 */

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
	if (n == 0)
	{
		return (0);
	}

	unsigned int index;

	int sum = 0;

	va_list nums;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(nums, int);
	}

	va_end(nums);

	return (sum);
}

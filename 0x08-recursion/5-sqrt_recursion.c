#include "main.h"

/**
 * pow_op - function that returns 
 * the natural sqrt of a number
 *
 * @n: input integer
 * @i: iterator
 *
 * Return: natural sqrt of n
 */

int pow_op(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i % (n / i) == n)
			return (c);
		else
			return (-1); 
	}
	return (0 + pow_op(n, c + 1);
}

/**
 * _sqrt_recursion - function that returns
 * the natural sqrt of a number
 *
 * @n: input integer
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 0)
		return (1);
	return (pow_op(n, 2));
}

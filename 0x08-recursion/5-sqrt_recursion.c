#include "main.h"

int a_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: input number
 * Return: sqrt or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (a_sqrt_recursion(n, 0));
}

/**
 * a_sqrt_recursion - recursion to find natural sqrt
 * @n: input number
 * @i: iterator
 * Return: sqrt
 */

int a_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (a_sqrt_recursion(n, i + 1));
}

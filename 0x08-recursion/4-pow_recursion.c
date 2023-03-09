#include "main.h"

/**
 * _pow_recursion - function that returns the value of
 * x raised to the power of y
 *
 * @x: base integer
 * @y: index integer
 *
 * Return: returns value of x exp y
 */

int _pow_recursion(int x, int y)
{
	if (y <= 0)
		return (-1);

	else
		return (x * _pow_recursion(y - 1));
}

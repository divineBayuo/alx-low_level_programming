#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: input number
 * Return: returns -1 if n < 0, 1 if n = 0, else factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
	{
		return (n * factorial(n-1));
	}
}

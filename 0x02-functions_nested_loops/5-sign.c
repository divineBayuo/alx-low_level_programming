#include "main.h"
/**
 * print_sign - print_sign prints the sign of a number
 *
 * @n: takes type integer(int n)
 *
 * Return: (0) success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar("+");
	}
	else if (n == 0)
	{
		return (0);
		_putchar("0");
	}
	else
	{
		return (-1);
		_putchar("-");
	}
	return (0);
}

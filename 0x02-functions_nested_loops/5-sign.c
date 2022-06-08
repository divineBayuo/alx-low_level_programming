#include "main.h"
/**
 * print_sign - print_sign prints the sign of a number
 *
 * @c: takes type integer(int c)
 *
 * Return: (0) success
 */

int print_sign(int c)
{
	if (c > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (c == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
	return (0);
}

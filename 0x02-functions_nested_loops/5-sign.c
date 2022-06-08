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
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n'')
	return (0);
}

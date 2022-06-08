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
		_putchar(43);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar(45);
	}
	else
	{
		return (0);
		_putchar(48);
	}
	return (0);
}

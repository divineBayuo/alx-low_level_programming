#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @num: takes type integer(int num)
 *
 * Return: (0) success
 */

int print_last_digit(int num)
{
	int digit;

	digit = num % 10;

	if (digit < 0)
	{
		_putchar(-digit + 48);
		return (-digit);
	}
	else
	{
		_putchar(digit + 48);
		return (digit);
	}
	_putchar('\n');
}

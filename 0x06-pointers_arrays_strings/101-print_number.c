#include "main.h"

/**
 * print_number- prints a number
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int max, d, count;

	if (n < 0)
	{
		_putchar(45);
		max = n * -1;
	}

	else
	{
		max = n;
	}

	d = max;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((max / count) % 10) + 48);
	}
}

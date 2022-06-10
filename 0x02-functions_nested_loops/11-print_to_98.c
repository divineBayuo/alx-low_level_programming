#include "main.h"
/**
 * print_to_98 - the function prints natural numbers from n to 98
 *
 *@n: natural number where print starts from
 *
 * Return: (void) success
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n + 48);
		_putchar(44);
		_putchar(32);
		n++;
	}
}

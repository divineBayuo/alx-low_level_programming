#include "main.h"
/**
 * times_table - the function prints the 9 times table
 *
 * takes no arguments (void)
 *
 * Return: (0) success
 */

void times_table(void)
{
	int a, b, mul;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 12; b++)
		{
			mul = a * b;
			_putchar(mul);
		}
	}
	_putchar('\n');
}

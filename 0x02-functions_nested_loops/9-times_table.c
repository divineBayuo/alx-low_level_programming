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
		_putchar(48);

		for (b = 0; b <= 9; b++)
		{
			mul = a * b;
			_putchar(44);
			_putchar(32);

			if (mul <= 9)
			{
				_putchar(32);
				_putchar(mul + 48);
			}
			else
			{
				_putchar((mul / 10) + 48);
				_putchar((mul % 10) + 48);
			}
		}
	}
	_putchar('\n');
}

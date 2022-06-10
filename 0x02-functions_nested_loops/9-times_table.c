#include "main.h"
/**
 * times_table - function prints the 9-times table
 *
 * Takes no input arguments
 *
 * Return (void) success
 */

void times_table(void)
{
	int a, b, mul;
	for (a = 0; a <= 9; a++)
	{
		_putchar(48);

		for (b = 1; b <= 9; b++)
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
		_putchar('\n');
	}
}

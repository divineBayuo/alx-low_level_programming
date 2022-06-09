#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Arguments: takes no arguments
 *
 * Return: (0) success
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (d = 48; d <= 50; d++)
	{
		for (c = 48; c <= 51; c++)
		{
			for (b = 48; b <= 53; b++)
			{
				for (a = 48; a <= 57; a++)
				{
					_putchar(d);
					_putchar(c);
					_putchar(58);
					_putchar(b);
					_putchar(a);
					_putchar('\n');
				}
			}
		}
	}
}

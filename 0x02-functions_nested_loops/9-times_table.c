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
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48, b <= 60; b++)
		{
			_putchar(a * b);
			_putchar('\n');
		}
	}
}

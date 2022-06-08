#include "main.h"
/**
 * print_alphabet_x10 - function print_alphabets_x10
 * Return (void) success
 */
void print_alphabet_x10(void)
{
	int i, a;

	for (i = 97; i < 123; i++)
	{
		for (a = 0; a < 10; a++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

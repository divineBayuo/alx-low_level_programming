#include "main.h"
/**
 * main - print alphabets with putchar
 * Return (0) success
 */
void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 27; i++)
	{
		_putchar(alphabet[i]);
	}
	_putchar('\n');

	return ();
}

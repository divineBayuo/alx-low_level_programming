#include "main.h"
/**
 * main - print alphabets with putchar
 * Return (0) success
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	print_alphabet();
	{
		for (i = 0; i < 27; i++)
		{
			_putchar(alphabet[i]);
		}
		_putchar('\n');
	}

	return (0);
}

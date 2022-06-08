#include "main.h"
/**
 * main - print alphabets with putchar
 * Return (0) success
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i, a;

	for (i = 0; i < 27; i++)
	{
		for (a = 0; a < 10; a++)
		{
			_putchar(alphabet[i]);
		}
		_putchar('\n');
	}
	_putchar('\n');

	return (0);
}

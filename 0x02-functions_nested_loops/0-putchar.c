#include "main.h"

/**
 * main - prints the word _putchar
 * Return: 0 (sucess)
*/

int main(void)
{
	char word[8] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(word[a]);
	}

	_putchar('\n');
§
	return (0);
}

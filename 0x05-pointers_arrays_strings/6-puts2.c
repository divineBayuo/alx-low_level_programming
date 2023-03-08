#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: string of characters
 *
 * Return: void
 */

void puts2(char *str)
{
	int count = 0;

	while (count >= 0 && *(str + count) != 0)
	{
		if (count % 2 == 0)
			_putchar(*(str + count));
		count++;
	}

	_putchar('\n');
}

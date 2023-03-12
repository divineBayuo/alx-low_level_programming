#include "main.h"

/**
 * main - prints the word _putchar
 * Return: 0 (success)
*/

int main(void)
{
	char word[8] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');

	return (0);
}

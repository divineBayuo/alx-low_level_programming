#include <stdio.h>

/**
 * main - printing a-z
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char alph = 'a';

	while (alph < 'z' + 1)
	{
		putchar(alph);
		alph++;
	}

	putchar('\n');

	return (0);
}

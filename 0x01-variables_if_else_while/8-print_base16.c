#include <stdio.h>

/**
 * main - printing a-z
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char fig = '0';
	char alph = 'a';

	while (fig <= '9')
	{
		putchar(fig);
		fig++;
	}

	while (alph <= 'f')
	{
		putchar(alph);
		alph++;
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - printing a-z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char dig = '0';
	char alp = 'a';

	while (dig <= '9')
	{
		putchar(dig);
		dig++;
	}

	while (alp <= 'f')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - printing a-z
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}

	putchar('\n');

	return (0);
}

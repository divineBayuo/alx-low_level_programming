#include <stdio.h>

/**
 * main - printing a-z and A-Z
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char alph1 = 'a';
	char alph2 = 'A';

	while (alph1 < 'z' + 1)
	{
		putchar(alph1);
		alph1++;
	}

	while (alph2 < 'Z' + 1)
	{
		putchar(alph2);
		alph2++;
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - printing a-z and A-Z
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char alph = 'a';

	while (alph < 'z' + 1)
	{
		if (alph != 'q' && alph != 'e')
			putchar(alps);
		alps++;
	}

	putchar('\n');

	return (0);
}


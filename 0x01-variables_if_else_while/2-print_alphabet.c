#include <stdio.h>

/**
 * main - printing a-z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp = 'a';

	while (alp < 'z' + 1)
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');

	return (0);
}

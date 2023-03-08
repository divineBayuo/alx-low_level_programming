#include <stdio.h>

/**
 * main - printing 0-9
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char fig = '0';

	while (fig < '9' + 1)
	{
		putchar(fig);
		fig++;
	}

	putchar('\n');

	return (0);
}

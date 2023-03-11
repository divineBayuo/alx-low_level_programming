#include <stdio.h>

/**
 * main - printing a-z
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	i++;
	}

	putchar('\n');

	return (0);
}

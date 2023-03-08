#include <stdio.h>

/**
 * main - printing 0-9
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}

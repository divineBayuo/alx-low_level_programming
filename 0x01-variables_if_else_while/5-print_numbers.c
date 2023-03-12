#include <stdio.h>
/**
 * main - printing 0-9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char dig = '0';

	while (dig < '9' + 1)
	{
		putchar(dig);
		dig++;
	}
	putchar('\n');

	return (0);
}

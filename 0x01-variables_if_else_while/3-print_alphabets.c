#include <stdio.h>
/**
 * main - printing a-z and A-Z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alps = 'a';
	char alpC = 'A';

	while (alps < 'z' + 1)
	{
		putchar(alps);
		alps++;
	}

	while (alpC < 'Z' + 1)
	{
		putchar(alpC);
		alpC++;
	}
	putchar('\n');

	return (0);
}

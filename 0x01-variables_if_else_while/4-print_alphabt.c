#include <stdio.h>
/**
 * main - printing a-z and A-Z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alps = 'a';

	while (alps < 'z' + 1)
	{
		if (alps != 'q' && alps != 'e')
			putchar(alps);
		alps++;
	}
	putchar('\n');

	return (0);
}

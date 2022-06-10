#include <stdio.h>
/**
 * print_to_98 - the function prints natural numbers from n to 98
 *
 *@n: natural number where print starts from
 *
 * Return: (void) success
 */

void print_to_98(int n)
{
	if (n >= 97)
	{
		while (n >= 97)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
			n--;
		}
	}

	else if (n <= 97)
	{
		while (n <= 97)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
			n++;
		}
	}

	else
	{
		printf("%d", n);
		printf(" ");
	}
}

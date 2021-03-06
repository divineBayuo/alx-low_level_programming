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
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
			n--;
		}
		printf("98");
		/*printf(" ");*/
	}

	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
			n++;
		}
		printf("98");
		/*printf(" ");*/
	}

	else
	{
		printf("%d", n);
		/*printf(" ");*/
	}
}

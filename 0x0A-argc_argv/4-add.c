#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * @argc: int count of arguments
 * @argv: vector of arguments
 *
 *Return: Success Always (0)
 */

int main(int argc, char *argv[])
{
	int a, b, len, sum;
	char *p;

	if (argc < 2)
		printf("0\n");

	else
	{
		sum = 0;
		for (a = 1; a < argc; a++)
		{
			p = argv[a];
			len = strlen(p);

			for (b = 0; b < len; b++)
			{
				if (isdigit(*(p + b)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[a]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

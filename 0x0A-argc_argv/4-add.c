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
	int a, b;

	for (a = 1; a < argc; a++)
	{
		if (argc == 1)
			printf("0\n");

		else if (argv[a] < 48 || argv[a] > 57)
			printf("Error\n");

		else
		{
			b = 1;

			for (a = 0; a < 2; a++)
			b += atoi(argv[a + 1]);

			printf("%d\n", b);
		}
	}
	return (0);
}

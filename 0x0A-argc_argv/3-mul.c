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

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		b = 1;

		for (a = 0; a < 2; a++)
		b *= atoi(argv[a + 1]);

		printf("%d\n", b);
	}
	return (0);
}

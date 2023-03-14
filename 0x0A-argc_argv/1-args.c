#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: int count of arguments
 * @argv: vector of arguments
 *
 * Return: Success Always (0)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc);

	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}
	return (0);
}

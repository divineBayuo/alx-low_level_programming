#include "main.h"
#include <stdio.h>

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
	int i = 0;

	if (argv[1] >= 48 && argv[1] <= 57 && argv[2] >= 48 && argv[2] <= 57)
	{
		printf("%d\n", argv[1] * argv[2]);
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}

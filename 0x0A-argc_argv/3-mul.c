#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of cmdline arguments
 * @argv: array of cmdline arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int a, mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

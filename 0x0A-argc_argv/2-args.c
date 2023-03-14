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

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of cmdline arguments
 * @argv: array of cmdline arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", *argv[a]);
	}
	return (0);
}

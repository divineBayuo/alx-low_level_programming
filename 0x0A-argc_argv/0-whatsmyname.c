#include "main.h"
#include <stdio.h>

/**
 * main - prints program name
 * @argc: number of cmdline arguments
 * @argv: array of cmdline arguments
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

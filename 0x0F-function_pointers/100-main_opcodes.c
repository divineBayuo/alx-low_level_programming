#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments of the program
 * @argv: array of arguments of the program
 *
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	char *opcode = (char *) main;
	int a, nb;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (a = 0; a < nb; a++)
	{
		printf("%02x", opcode[a] & 0xFF);
		if (a != nb - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}

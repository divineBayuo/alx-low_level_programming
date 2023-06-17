#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <cytpe.h>

/**
 * zero_check - checks if a number is zero
 * @argv: array of the arguments
 * Return: no return
 */

void zero_check(char *argv[])
{
	int i, isn1 = 1, isn2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			isn1 = 0;
			break;
		}
	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			isn2 = 0;
			break;
		}
	if (isn1 == 1 || isn2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}


/**
 * array_init - set memory to 0 in a new array
 * @ptr: char array
 * @lptr: length of char array
 * Return: pointer to array
 */

char *array_init(char *ptr, int lptr)
{
	int a = 0;

	for (a = 0; a < lptr; a++)
		ptr[a] = '0';
	ptr[lptr] = '\0';
	return (ptr);
}


/**
 * num_check - determines length of number
 * and if number is base 10
 * @argv: array of arguments
 * @n: row of the array
 * Return: length of the number
 */

int num_check(char *argv[], int n)
{
	int ln;

	for (ln = 0; argv[n][ln]; ln++)
		if (!isdigit(argv[n][ln]))
		{
			printf("Error\n");
			exit(98);
		}
	return (ln);
}


/**
 * main - multiplies 2 positive numbers
 * @argc: count of the arguments
 * @argv: array of the arguments
 * Return: Always (0) success
 */

int main(int argc, char *argv[])
{
	int ln1, ln2, lnout, add, addl, i, j, k, ca;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	ln1 = num_check(argv, 1), ln2 = num_check(argv, 2);
	zero_check(argv), lnout = ln1 + ln2, nout = malloc(lnout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = array_init(nout, lnout);
	k = lnout - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';
			}
			i = ln - 1, j--, addl = 0, ca++, k = lnout - (1 + ca);
		}
		if (j < 0)
		{
			if (nout[0] != '0')
				break;
			lnout--;
			free(nout), nout = malloc(lnout + 1), nout = array_init(nout, lnout);
			k = lnout - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}

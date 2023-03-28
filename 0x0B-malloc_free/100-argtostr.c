#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all
 *		the arguments of your program
 *
 * @ac: number of arguments of the program
 * @av: array of arguments of the program
 *
 * Return: pointer to string, or NULL if it fails
 *	NULL if ac/av == 0
 */

char *argstostr(int ac, char **av)
{
	int arg, byte, ind, size = ac;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	ind = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[index++] = av[arg][byte];

		str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to new string, NULL if fail
 */

char *argstostr(int ac, char **av)
{
	char *new;
	int count, a, b, c;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (count = a = 0; a < ac; a++)
	{
		if (av[a] == NULL)
			return (NULL);
		for (b = 0; av[a][b] != '\0'; b++)
			count++;
		count++;
	}

	new = malloc(sizeof(char) * (count + 1));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	for (a = b = c = 0; c < count; b++, c++)
	{
		if (av[a][b] == '\0')
		{
			new[c] = '\n';
			a++;
			c++;
			b = 0;
		}
		if (c < count - 1)
			new[c] = av[a][b];
	}
	new[c] = '\0';
	return (new);
}

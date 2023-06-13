#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains copy of string
 *
 * @str: string given as a parameter
 *
 * Return: Always Success (0)
 */

char *_strdup(char *str)
{
	char *new;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	new = (char *)malloc(sizeof(char) * (a + 1));

	if (new == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		new[b] = str[b];

	return (new);
}

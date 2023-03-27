#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 *	allocated space in memory, which contains a
 *	copy of the string given as a parameter
 *
 * @str: string given as a parameter
 *
 * Return: NULL if str = NULL || insufficient memory
 *	else a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	unsigned int a;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		dup[a] = str[a];

	dup[length] = '\0';

	return (dup);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: returns pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int a, b, c, lim;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	new == (char *)malloc(sizeof(char) * (a + b + 1));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	for (c = 0; c < a; c++)
		new[c] = s1[c];

	lim = b;
	for (b = 0; b <= lim; c++, b++)
		new[c] = s2[b];

	return (new);
}

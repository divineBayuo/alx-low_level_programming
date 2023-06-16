#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2
 * Return: pointer to newly allocated space in memory, else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a, b, n_new, i;
	char *new;

	if (s1 == NULL)
		return (s1 = "");

	if (s2 == NULL)
		return (s2 = "");

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	if (n > b)
		n = b;

	n_new = a + n;

	new = malloc(sizeof(char) * (n_new + 1));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; i < new_n; i++)
	{
		if (i < a)
			new[i] = s1[i];
		else
			new[i] = s2[i - a];
	}

	new[i] = '\0';

	return (new);
}

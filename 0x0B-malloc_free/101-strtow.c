#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * countWord - helper function to count the number of words in a string
 * @s: input string
 * Return: number of words in a string
 */

int countWord(char *s)
{
	int marker, c, w;

	marker = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			marker = 0;
		else if (marker == 0)
		{
			marker = 1;
			w++;
		}
	}
	return (w);
}

/**
 * strtow - splits a string into words
 * @str: input string
 * Return: pointer to array of strings or NULL if str is NULL
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, word, c = 0, start, end;

	while (*(str + len))
		len++;
	word = countWord(str);
	if (word == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (word + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}

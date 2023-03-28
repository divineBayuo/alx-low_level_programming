#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - function that locates the index marking the
 *		end of the first word contained in the string
 *
 * @str: string to be searched
 *
 * Return: index marking the end of the first word
 */

int word_len(char *str)
{
	int ind = 0, len = 0;

	while (*(str + ind) && *(str + ind) != ' ')
	{
		len++;
		ind++;
	}
	return (len);
}


/**
 * count_words - function that counts the number of words
 *		contained within a string
 *
 * @str: string whose number of words is counted
 *
 * Return: number of words
 */

int count_words(char *str)
{
	int ind = 0, word = 0, len = 0;

	for (ind = 0; *(str + ind); ind++)
		len++;

	for (ind = 0; ind < len; ind++)
	{
		if (*(str + ind) != ' ')
		{
			word++;
			ind += word_len(str + ind);
		}
	}
	return (word);
}

/**
 * strtow - function that splits a string into words
 *
 * @str: string to be split
 *
 * Return: NULL if str = NULL || function fails
 *	else, pointer to array of string of words
 */

char **strtow(char *str)
{
	char **string;
	int index = 0, word, w, letter, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word = count_words(str);
	if (word == 0)
		return (NULL);

	string = malloc(sizeof(char *) * (word + 1));
	if (string == NULL)
		return (NULL);

	for (w = 0; w < word; w++)
	{
		while (str[index] == ' ')
			index++;

		letter = word_len(str + index);

		string[w] = malloc(sizeof(char) * (letter + 1));

		if (string[w] == NULL)
		{
			for (; w >= 0; w--)
				free(string[w]);

			free(string);
			return (NULL);
		}
		for (l = 0; l < letter; l++)
			string[w][l] = str[index++];

		string[w][l] = '\0';
	}
	string[w] = NULL;

	return (string);
}

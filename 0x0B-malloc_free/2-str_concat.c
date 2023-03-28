#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int ind, concat_ind = 0, length = 0;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ind = 0; s1[ind] || s2[ind]; ind++)
		length++;

	concat_str = malloc(sizeof(char) * length);

	if (concat_str == NULL)
		return (NULL);

	for (ind = 0; s1[ind]; ind++)
		concat_str[concat_ind++] = s1[ind];

	for (ind = 0; s2[ind]; ind++)
		concat_str[concat_ind++] = s2[ind];

	return (concat_str);
}

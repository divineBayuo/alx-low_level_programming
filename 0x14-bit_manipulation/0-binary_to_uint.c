#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int
 * @b: pointer to the binary number
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ans, exp, len;

	ans = 0;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, exp = 1; len >= 0; len--, exp *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
			ans += exp;
	}
	return (ans);
}

#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int
 * @b: binary number
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ans;
	int b2, len;

	ans = 0;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, b2 = 1; len >= 0; len--, b2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
			ans += b2;
	}
	return (ans);
}

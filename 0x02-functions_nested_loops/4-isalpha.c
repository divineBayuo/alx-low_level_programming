#include "main.h"
/**
 * _isalpha - _isalpha checks for alphabetic character
 *
 * @c: takes type integer(int c)
 *
 * Return: (0) success
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

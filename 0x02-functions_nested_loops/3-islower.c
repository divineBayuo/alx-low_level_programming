#include "main.h"
/**
 * _islower - _islower checks for lower case characters
 *
 * @c: takes type integer(int c)
 *
 * Return: (0) success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

#include "main.h"

int checker(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - tells if a string is palindrome
 * @s: input string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checker(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of string
 * @s: input string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * checker - check characters recursively
 * @s: input string
 * @i: iterator
 * @len: length of string
 * Return: 1 if palindrome, 0 if not
 */

int checker(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (checker(s, i + 1, len - 1));
}

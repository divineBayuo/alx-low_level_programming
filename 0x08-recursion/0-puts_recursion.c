#include "main.h"

/**
 * _puts_recursion - function that prints a string
 *
 * @s: input string
 *
 * Return: no return
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return (s);
	_puts_recursion(*(s + 1));
}

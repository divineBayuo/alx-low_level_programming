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
	int a;

	if (*(s + a) == '\0')
		return (s);
	_puts_recursion(*s);
}

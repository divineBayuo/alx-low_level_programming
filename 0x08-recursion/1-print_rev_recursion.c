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
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}

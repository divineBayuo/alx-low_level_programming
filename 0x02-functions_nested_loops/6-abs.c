#include "main.h"
/**
 * _abs(int)  _abs(int) finds the abs value of an integer
 *
 * @n: takes type integer(int n)
 *
 * Return: (0) success
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	_putchar('\n');
}

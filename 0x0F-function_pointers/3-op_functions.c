#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of 2 num
 * @a: first num
 * @b: second num
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - Returns sub of 2 num
 * @a: first num
 * @b: second num
 * Return: sub of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Returns mul of 2 num
 * @a: first num
 * @b: second num
 * Return: mul of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Returns div of 2 num
 * @a: first num
 * @b: second num
 * Return: div of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - Returns mod of 2 num
 * @a: first num
 * @b: second num
 * Return: mod of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

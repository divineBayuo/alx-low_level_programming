#include "main.h"

/**
 * swap_int - swaps two intgers a nd b
 * @a: fist integer
 * @b: second integr
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

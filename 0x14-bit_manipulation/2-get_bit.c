#	include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * at a given index
 * @index: the index starting from 0 of the bit you want to get
 * @n: input number
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (n == 0 && index < 64)
		return (0);

	for (a = 0; a <= 63; n >>= 1, a++)
	{
		if (index == a)
			return (n & 1);
	}
	return (-1);
}

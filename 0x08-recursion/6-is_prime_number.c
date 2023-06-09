#include "main.h"

int a_prime_number(int n, int i);

/**
 * is_prime_number - tells if integer is prime or not
 * @n: input number
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (a_prime_number(n, n - 1));
}

/**
 * a_prime_number - calculates if a number is prime
 * @n: input number
 * @i: iterator
 * Return: 1 if prime, 0 if not
 */

int a_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (a_prime_number(n, i - 1));
}

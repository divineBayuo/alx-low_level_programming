#include "main.h"

/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: input number
 * @low: lower boundary
 * @high: higher boundary
 * Return: sqrt or -1
 */

int _sqrt_recursion(int n, int low, int high)
{
	if (low > high)
		return high;

	int mid = low + (high - low) / 2;

	if (mid <= n / mid && (mid + 1) > n / (mid + 1))
		return mid;
	else if (mid > n / mid)
		return _sqrt_recursion(n, low, mid - 1);
	else
		return _sqrt_recursion(n, mid + 1, high);
}

#include "main.h"

/**
 * print_times_table -print the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int a, b, opr;

	if (n >= 0 && n <= 15)
	{

		for (a = 0; a <= n; a++)
		{
			_putchar(48);

			for (b = 1; b <= n; b++)
			{
				opr = a * b;
				_putchar(44);
				_putchar(32);

				if (opr <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(opr + 48);
				}

				else if (opr <= 99)
				{
					_putchar(32);
					_putchar((opr / 10) + 48);
					_putchar((opr % 10) + 48);
				}

				else
				{
					_putchar(((opr / 100) % 10) + 48);
					_putchar(((opr / 10) % 10) + 48);
					_putchar((opr % 10) + 48);
				}
			}

			_putchar('\n');
		}
	}
}

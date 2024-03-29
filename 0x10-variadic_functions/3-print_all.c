#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed
 * to the function
 *
 * Return: no return
 */

void print_all(const char * const format, ...)
{
	int ind;
	char *str;
	char *sep = ", ";
	va_list args;

	ind = 0;
	va_start(args, format);

	while (format != NULL && *(format + ind) != '\0')
	{
		switch (*(format + ind))
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s", str);
				break;
			default:
				ind++;
				continue;
		}
		if (*(format + ind + 1) != 0)
			printf("%s", sep);
		ind++;
	}
	printf("\n");
	va_end(args);
}

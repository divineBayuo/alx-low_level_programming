#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * File: variadic_functions.h
 * Description: Header file containing prototypes for all functions in the
 *	 variadic functions directory
 */

/**
 * struct printer - A new structure defining a printer.
 * @symbol: A symbol representing data type.
 * @print: A function pointer to a function that prints
 *	   data type corresponding to symbol.
 *
 * Description: The structure struct printer takes a symbol representing
 *	a data type and a print function pointer to a function
 *	that prints data type corresponding to symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

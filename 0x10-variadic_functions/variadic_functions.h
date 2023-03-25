#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * File: variadic_functions.h
 * Desc: Header file for all functions in the
 *	 variadic functions directory
 */

#include <stdarg.h>

/**
 * struct printer - New struct type defining printer
 * @symbol: Symbol representing data type
 * @print: function pointer to a function that prints
 *	   data type corresponding to symbol
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

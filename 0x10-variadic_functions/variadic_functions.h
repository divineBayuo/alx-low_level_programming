#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * File: variadic_functions.h - header file for structure printer and prototypes
 * Auth: Divine Bayuo
 * Desc: Header file containing prototypes for all functions
 * used in the 0x0F-variadic_functions directory, 
 * and the structure definition of printer
 */

#include <stdarg.h>

/**
 * struct printer - structure called printer
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 * a data type corresponding to symbol.
 *
 * Desc: this structure defines a printer
 * for printing characters
 */
struct printer
{
	char *symbol;
	void (*print)(va_list arg);

};

/**
 * printer - Typedef for struct printer
 */
typedef struct printer printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */

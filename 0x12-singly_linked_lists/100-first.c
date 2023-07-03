#include "lists.h"
#include <stdio.h>

/**
 * premain_func - function that prints before the main
 * Return: no return
 */

void __attribute__((constructor)) premain_func()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}

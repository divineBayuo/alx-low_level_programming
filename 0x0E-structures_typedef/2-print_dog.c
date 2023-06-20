#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: the dog structure to be printed
 *
 * Return: no return
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %lu\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}

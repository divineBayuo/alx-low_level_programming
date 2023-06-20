#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type
 * dog
 * @d: a structure named dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
	return ();
}

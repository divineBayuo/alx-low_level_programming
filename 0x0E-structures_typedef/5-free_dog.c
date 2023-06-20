#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees the dog
 * @d: the dog to be freed
 *
 * Return: no return
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}

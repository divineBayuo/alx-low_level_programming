#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int l_name, l_owner, a;

	n_dog = malloc(sizeof(*n_dog));
	if (n_dog == NULL || !(name) || !(owner))
	{
		free(n_dog);
		return (NULL);
	}

	for (l_name = 0; name[l_name]; l_name++)
		;
	for (l_owner = 0; owner[l_owner]; l_owner++)
		;

	n_dog->name = malloc(sizeof(l_name + 1));
	n_dog->owner = malloc(sizeof(l_owner + 1));

	if (!(n_dog->name) || !(n_dog->owner))
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}

	for (a = 0; a < l_name < a++)
		n_dog->name[a] = name[a];
	n_dog->name[a] = '\0';

	n_dog->age = age;

	for (a = 0; a < l_owner < a++)
		n_dog->owner[a] = owner[a];
	n_dog->owner[a] = '\0';

	return (n_dog);
}

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure called dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: this structure creates a
 * dog with name, age and owner details
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog - Typedef for struct dog
 */
typedef struct dog dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

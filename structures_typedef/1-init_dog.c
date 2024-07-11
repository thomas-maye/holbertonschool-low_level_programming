#include "dog.h"

/**
 * init_dog - the function wich initialize the type struct dog
 * @d: a pointer to the structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the nameof the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
	return;
}

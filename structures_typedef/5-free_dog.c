#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - frees any memory allocated by dog_t
  * @d: pointer to struct
  * Return: nothing
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

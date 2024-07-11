#ifndef dog_h
#define dog_h

#include <stdio.h>

/**
 * struct dog - structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog_t *d, char *name, float age, char *owner);
void print_dog(struct dog_t*d);

#endif

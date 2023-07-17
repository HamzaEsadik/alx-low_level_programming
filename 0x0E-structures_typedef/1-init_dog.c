#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a structure
 * @d: struct
 * @name: his name
 * @age: his age
 * @owner: his owner
 * Return: null
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

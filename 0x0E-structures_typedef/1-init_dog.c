#include "dog.h"
#include <stdio.h>

/**
 * init_dog - the initialising dog main function
 * @d: the d parameter function
 * @name: the name of the dog output
 * @age: the age of the dog output
 * @owner: the owner of the dog output
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

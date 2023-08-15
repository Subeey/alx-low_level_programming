#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - the free dog function
 * @d: the d dog_t parameter function
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

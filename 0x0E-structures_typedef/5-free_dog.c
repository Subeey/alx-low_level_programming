#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - the free dog function
 * @d: the d dog_t parameter function
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

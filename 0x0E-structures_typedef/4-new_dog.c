#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include "string.h"

/**
 * new_dog - the dog new main function
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: pointer or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (!newDog)
		return (NULL);

	newDog->name = strdup(name);
	newDog->owner = strdup(owner);
	if (!newDog->name || !newDog->owner)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	newDog->age = age;
	return (newDog);
}

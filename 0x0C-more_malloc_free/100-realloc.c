#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - the main function
 * @ptr: the ptr parameter function
 * @old_size: the parameter function
 * @new_size: the second parameter funtion
 * Return: to the pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *output;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		output = malloc(new_size);
		if (output == NULL)
			return (NULL);
		return (output);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}

	}
	output = malloc(new_size);
	if (output == NULL)
		return (NULL);
	for (a = 0; a < old_size && a < new_size; a++)
	{
		output[a] = ((char *) ptr)[a];
	}
	free(ptr);
	return (output);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - the main malloc function
 * @b: the b parameter function
 * Return: the pointer to a memory allocation
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}

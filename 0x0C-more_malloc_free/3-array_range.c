#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - the array main function
 * @min: the mininmum parameter
 * @max: the maximum parameter function
 * Return: to the pointer
 */

int *array_range(int min, int max)
{
	int a = 0;
	int *output;

	if (min > max)
		return (NULL);
	output = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (output == NULL)
		return (NULL);

	while (min <= max)
	{
		output[a] = min;
		a++;
		min++;
	}
	return (output);
}

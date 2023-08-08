#include "main.h"

/**
 * create_array - the create array main function
 * @size: the size of array parameter
 * @c: the c parameter
 * Return: the pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}

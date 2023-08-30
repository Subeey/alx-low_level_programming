#include "function_pointers.h"

/**
 * int_index - the int index function
 * @array: the array function
 * @size: the size function
 * @cmp: the cmp function
 * Return: 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}

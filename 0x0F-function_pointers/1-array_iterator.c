#include "function_pointers.h"

/**
 * array_iterator - the array main function
 * @array: the array parameter function
 * @size: the size of the array parameter function
 * @action: the pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

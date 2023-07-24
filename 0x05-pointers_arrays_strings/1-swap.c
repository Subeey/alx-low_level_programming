#include "main.h"

/**
 * swap_int - swap the values function
 * @a: the value for integer 1
 * @b: the  value of integer 2
 * Return: return is void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

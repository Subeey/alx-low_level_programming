#include "main.h"

/**
 * reverse_array - the array main function
 * @a: the a parameter function
 * @n: the n parameter function
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int m;

	for (i = 0; i < n--; i++)
	{
		m = a[i];
		a[i] = a[n];
		a[n] = m;
	}
}

#include "main.h"

/**
 * print_array - the main functionm
 * @a: the array
 * @n: the number
 * Return: is void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}

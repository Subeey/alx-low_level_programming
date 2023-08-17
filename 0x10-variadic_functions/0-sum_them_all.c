#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the sum them all function
 * @n: the n parameter function
 * Return: to the pointer or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum = 0;
	va_list args;
	va_start(args, n);

	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}

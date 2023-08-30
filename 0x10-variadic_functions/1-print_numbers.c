#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - the print numbers functions
 * main - the main function
 * @separator: the separating parameter function
 * @n: the n pararmeter function
 * Return: to a pointer or always 0 on success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

#include "main.h"

/**
 * print_line - the main funtion
 * @n: the function parameter
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int f;

		for (f = 1 ; f <= n ; f++)
			_putchar('_');
		_putchar('\n');
	}
}

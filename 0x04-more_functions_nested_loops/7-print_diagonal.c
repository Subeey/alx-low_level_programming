#include "main.h"

/**
 * print_diagonal - the main function
 * @n: the function parameter
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;
		int f;

		for (i = 0 ; i < n ; i++)
		{
			for (f = 0; f <= i ; f++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}

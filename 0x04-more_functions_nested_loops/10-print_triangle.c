#include "main.h"

/**
 * print_triangle - the main function
 * @size: the function parameter
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int f;

		for (i = 1; i <= size; i++)
		{
			for (f = i; f < size; f++)
			{
				_putchar(' ');
			}

			for (f = 1; f <= i; f++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

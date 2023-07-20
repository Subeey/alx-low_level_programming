#include "main.h"

/**
 * more_numbers - the main funtion
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int f;

	for (i = 0 ; i < 10 ; i++)
	{
		for (f = 0 ; f <= 14 ; f++)
		{
			if (f > 9)
				_putchar(f / 10 + '0');
			_putchar(f % 10 + '0');
		}
		_putchar('\n');
	}
}

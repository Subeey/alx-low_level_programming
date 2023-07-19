#include "main.h"
/**
 * print_alphabet_x10 - the alphabet function
 * Return: is always 0 when successful
 */
void print_alphabet_x10(void)
{
	int b;
	char c;

	for (b = 0 ; b < 10 ; b++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
			_putchar(c);
		_putchar('\n');
	}

}

#include "main.h"

/**
 * _puts - the puts function
 * @str: the string function
 * Return: is void
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

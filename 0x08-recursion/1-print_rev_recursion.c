#include "main.h"
/**
 * _print_rev_recursion - the print reverse recursion function
 * @s: the s parameter function
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

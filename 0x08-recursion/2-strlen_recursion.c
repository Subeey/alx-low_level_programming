#include "main.h"
/**
 * _strlen_recursion - the string lenght recursion function
 * @s: the s parameter function
 * Return: longit
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}

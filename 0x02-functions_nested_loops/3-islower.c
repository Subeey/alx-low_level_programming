#include "main.h"
/**
 * _islower - the int function
 * @c: parameter to be checked
 * Return: is always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

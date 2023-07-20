#include "main.h"

/**
 * _isdigit - the digit function
 * @c: the function parameter
 * Return: always 1 when success 0 when failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

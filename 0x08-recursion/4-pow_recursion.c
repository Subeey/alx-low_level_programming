#include "main.h"

/**
 * _pow_recursion - the pow recursion function
 * @x: the x parameter function
 * @y: the y parameter function
 * Return: 1 or pow recursion
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

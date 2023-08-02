#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - the natural square root function
 * @n: the n parameter function
 * Return: the square root result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: the n parameter function
 * @i: the i parameter function
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

#include "main.h"

/**
 * factorial - the factorial function
 * @n: the n parameter function
 * Return: factorial n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

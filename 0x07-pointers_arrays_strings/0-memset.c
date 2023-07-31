#include "main.h"

/**
 * _memset - fills first byte of the memory function
 * @s: the s parameter function
 * @b: the b parameter function
 * @n: number of bytes
 * Return: to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}

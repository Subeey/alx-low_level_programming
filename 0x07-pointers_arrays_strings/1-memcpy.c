#include "main.h"

/**
 * _memcpy - the copy memory function
 * @dest: the destination parameter
 * @src: the source parameter
 * @n: number of bytes to copy
 * Return: to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
		dest[a] = src[a];
	return (dest);
}

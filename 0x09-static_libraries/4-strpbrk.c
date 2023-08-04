#include "main.h"
/**
 * _strpbrk - the string break function
 * @s: the s parameter function
 * @accept: the accept parameter function
 * Return: s or 0
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
			if (*s == accept[a])
			return (s);
			}
		s++;
		}

	return ('\0');
}

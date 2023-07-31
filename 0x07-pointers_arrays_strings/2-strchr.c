#include "main.h"

/**
 * _strchr - string of a character funtion
 * @s: the s parameter function
 * @c: the c parameter function
 * Return: to s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}

#include "main.h"
/**
 * _strlen - the lenght of the string function
 * @s: the number of string to be counted
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - the concatination function
 * @s1: the string 1 lenght function
 * @s2: the string 2 lenght function
 * @n: the n parameter function
 * Return: the pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		s1len++;
	for (a = 0; s2[a] != '\0'; a++)
		s2len++;

	output = malloc(sizeof(char) * (s1len + n) + 1);
	if (output == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (a = 0; s1[a] != '\0'; a++)
			output[a] = s1[a];
		for (a = 0; s2[a] != '\0'; a++)
			output[s1len + a] = s2[a];
		output[s1len + a] = '\0';
	}
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			output[a] = s1[a];
		for (a = 0; a < n; a++)
			output[s1len + a] = s2[a];
		output[s1len + a] = '\0';
	}
	return (output);
}

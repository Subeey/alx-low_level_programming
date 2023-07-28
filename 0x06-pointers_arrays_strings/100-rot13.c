#include "main.h"
#include <stdio.h>

/**
 * rot13 - the rot13 main function
 * @s: the s parameter function
 * Return: s
 */

char *rot13(char *s)
{
	int i;
	int m;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (m = 0; m < 52; m++)
		{
			if (s[i] == data1[m])
			{
				s[i] = datarot[m];
				break;
			}
		}
	}
	return (s);
}

#include "main.h"
/**
 * _isalpha - the main function
 * @c: the parameter
 * Return: always 0
 */
int _isalpha(int c)
{
	for ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	       return (1);
	else
		return (0);
}	

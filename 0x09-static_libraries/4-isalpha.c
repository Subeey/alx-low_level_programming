#include "main.h"

/**
 * _isalpha - the main function
 * @c: the parameter
 * Return: always 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

#include <unistd.h>

/**
 * _putchar - c character is written
 * @c: character to print
 * Return: always 1 on success
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

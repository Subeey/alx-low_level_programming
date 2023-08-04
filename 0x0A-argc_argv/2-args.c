#include <stdio.h>

/**
 * main - the main function
 * @argc: the argument c function
 * @argv: the argument v function
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}

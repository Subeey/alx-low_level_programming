#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - the print name function
 * @name: the name parameter function
 * @f: the f parameter function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);

	printf("Name: %s\n", name);
}

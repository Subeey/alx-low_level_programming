#include "lists.h"
#include <stdio.h>

/**
 * print_list - the list main function
 * @h: the h parameter function
 * Return: to the node
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%u] %s\n", h->len, (h->str) ? h->str : "(nil)");
		h = h->next;
		count++;
	}

	return (count);
}

#include "lists.h"
#include <stddef.h>

/**
 * listint_len - the list int lenght function
 * @h: the h parameter function
 * Return: ti the pointer or 0
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

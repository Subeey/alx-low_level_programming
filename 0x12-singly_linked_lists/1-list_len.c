#include "lists.h"
#include <stddef.h>

/**
 * list_len - the list lenght function
 * @h: the h parameter function
 * Return: to pointer of the node or 0
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *lst = h;

	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

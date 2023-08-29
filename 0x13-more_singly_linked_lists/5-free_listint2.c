#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - the free list function
 * @head: the head parameter function
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;

	while (*head)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
	}

	*head = NULL;
}

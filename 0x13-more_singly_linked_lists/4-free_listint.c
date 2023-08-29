#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - the main free list int function
 * @head: the head parameter function
 */

void free_listint(listint_t *head)
{
	listint_t *output;

	while (head)
	{
		output = head->next;
		free(head);
		head = output;
	}
}

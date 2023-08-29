#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - the add node int function
 * @head: the head parameter function
 * @n: the n parameter function
 * Return: to the pointer or NULL when it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *output;

	output = malloc(sizeof(listint_t));
	if (!output)
		return (NULL);

	output->n = n;
	output->next = *head;
	*head = output;

	return (output);
}

#include "lists.h"

/**
 * add_nodeint_end - the add node int end function
 * @head: the head parameter function
 * @n: the n parameter function
 * Return: to a pointer or NULL when it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *output;
	listint_t *new = *head;

	output = malloc(sizeof(listint_t));
	if (!output)
		return (NULL);

	output->n = n;
	output->next = NULL;

	if (*head == NULL)
	{
		*head = output;
		return (output);
	}

	while (new->next)
		new = new->next;

	new->next = output;

	return (output);
}

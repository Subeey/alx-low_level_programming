#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - the add node main function
 * @str: the string function
 * @head: the head function
 * Return: pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *right;

	while (str[len])
		len++;

	right = malloc(sizeof(list_t));
	if (!right)
		return (NULL);

	right->str = strdup(str);
	right->len = len;
	right->next = (*head);
	(*head) = right;

	return (*head);
}

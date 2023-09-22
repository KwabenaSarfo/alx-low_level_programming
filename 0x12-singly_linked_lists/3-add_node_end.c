#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: double pointer
 * @str: string
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tempOne = *head;
	unsigned int lengOne = 0;

	while (str[lengOne])
		lengOne++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->lengOne = lengOne;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tempOne->next)
		tempOne = tempOne->next;

	tempOne->next = new;

	return (new);
}

#include "lists.h"

/**
 * free_listint2 - frees linked list
 * @head: pointer listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp24;

	if (head == NULL)
		return;

	while (*head)
	{
		temp24 = (*head)->next;
		free(*head);
		*head = temp24;
	}

	*head = NULL;
}

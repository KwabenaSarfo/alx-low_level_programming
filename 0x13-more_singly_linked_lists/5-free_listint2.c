#include "lists.h"

/**
 * free_listint2 - linked list
 * @head: pointer to the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp12;

	if (head == NULL)
		return;

	while (*head)
	{
		temp12 = (*head)->next;
		free(*head);
		*head = temp12;
	}

	*head = NULL;
}

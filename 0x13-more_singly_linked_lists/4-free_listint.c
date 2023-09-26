#include "lists.h"

/**
 * free_listint - linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp12;

	while (head)
	{
		temp12 = head->next;
		free(head);
		head = temp12;
	}
}

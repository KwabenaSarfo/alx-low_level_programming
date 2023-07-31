#include "lists.h"

/**
 * free_listint - frees a linked
 * @head: listint_t list freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp1;

	while (head)
	{
		temp1 = head->next;
		free(head);
		head = temp1;
	}
}

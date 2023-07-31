#include "lists.h"

/**
 * pop_listint - deletes the head node a linked list
 * @head: linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp13;
	int num5;

	if (!head || !*head)
		return (0);

	num5 = (*head)->n;
	temp13 = (*head)->next;
	free(*head);
	*head = temp13;

	return (num5);
}

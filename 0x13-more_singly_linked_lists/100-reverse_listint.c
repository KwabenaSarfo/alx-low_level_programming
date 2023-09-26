#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev12 = NULL;
	listint_t *next13 = NULL;

	while (*head)
	{
		next13 = (*head)->next;
		(*head)->next = prev12;
		prev12 = *head;
		*head = next13;
	}

	*head = prev12;

	return (*head);
}

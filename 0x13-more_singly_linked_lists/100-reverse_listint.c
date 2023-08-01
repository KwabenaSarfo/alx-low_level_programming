#include "lists.h"

/**
 * reverse_listint - linked list
 * @head: pointer to the first node
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next_node;
	}

	*head = prev;

	return (*head);
}

#include "lists.h"

/**
 * add_nodeint - adds a new node at linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new4;

	new4 = malloc(sizeof(listint_t));
	if (!new4)
		return (NULL);

	new4->n = n;
	new4->next = *head;
	*head = new4;

	return (new4);
}

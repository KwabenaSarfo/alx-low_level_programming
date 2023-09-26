#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new12;
	listint_t *temp = *head;

	new12 = malloc(sizeof(listint_t));
	if (!new12)
		return (NULL);

	new12->n = n;
	new12->next = NULL;

	if (*head == NULL)
	{
		*head = new12;
		return (new12);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new12;

	return (new12);
}

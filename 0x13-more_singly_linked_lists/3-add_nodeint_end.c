#include "lists.h"

/**
* add_nodeint_end - adds a node
* @head: pointer to the first element
* @n: to insert in the new element
*
* Return:NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new8;
	listint_t *temp = *head;

	new8 = malloc(sizeof(listint_t));
	if (!new8)
		return (NULL);

	new8->n = n;
	new8->next = NULL;

	if (*head == NULL)
	{
		*head = new8;
		return (new8);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new8;

	return (new8);
}

#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer to the first node
 * @idx: index
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *new12;
	listint_t *temp = *head;

	new12 = malloc(sizeof(listint_t));
	if (!new12 || !head)
		return (NULL);

	new12->n = n;
	new12->next = NULL;

	if (idx == 0)
	{
		new12->next = *head;
		*head = new12;
		return (new12);
	}

	for (k = 0; temp && k < idx; k++)
	{
		if (k == idx - 1)
		{
			new12->next = temp->next;
			temp->next = new12;
			return (new12);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

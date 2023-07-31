#include "lists.h"

/**
 * get_nodeint_at_index - returns the node linked list
 * @head: first node
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int r = 0;
	listint_t *temp14 = head;

	while (temp14 && r < index)
	{
		temp14 = temp14->next;
		r++;
	}

	return (temp14 ? temp14 : NULL);
}

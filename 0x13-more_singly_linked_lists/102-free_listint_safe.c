#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node
 *
 * Return: number of elements in the freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff9;
	listint_t *temp1;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff9 = *h - (*h)->next;
		if (diff9 > 0)
		{
			temp1 = (*h)->next;
			free(*h);
			*h = temp1;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}

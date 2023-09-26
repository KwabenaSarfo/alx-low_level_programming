#include "lists.h"

/**
 * free_listint_safe - linked list
 * @h: pointer to the node in the linked list
 *
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t leng = 0;
	int diff12;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff12 = *h - (*h)->next;
		if (diff12 > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			leng++;
		}
		else
		{
			free(*h);
			*h = NULL;
			leng++;
			break;
		}
	}

	*h = NULL;

	return (leng);
}

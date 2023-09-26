#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number1 = 0;

	while (h)
	{
		number1++;
		h = h->next;
	}

	return (number1);
}

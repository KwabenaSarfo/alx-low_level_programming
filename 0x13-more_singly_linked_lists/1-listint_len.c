#include "lists.h"

/**
* listint_len - returns the number linked lists
* @h: linked list of type listint_t to traverse
*
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t numbe = 0;

	while (h)
	{
		numbe++;
		h = h->next;
	}

	return (numbe);
}

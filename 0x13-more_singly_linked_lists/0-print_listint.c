#include "lists.h"

/**
* print_listint - prints all the elements
* @h: linked list
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t numbe = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numbe++;
		h = h->next;
	}

	return (numbe);
}

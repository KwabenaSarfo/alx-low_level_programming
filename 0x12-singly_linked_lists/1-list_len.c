#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number elements in linked list
 * @h: pointer
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t ksk = 0;

	while (h)
	{
		ksk++;
		h = h->next;
	}
	return (ksk);
}

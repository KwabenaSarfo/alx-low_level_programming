#include "lists.h"

/**
 * sum_listint - calculates the sum in a listint_t list
 * @head: first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum12 = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum12 += temp->n;
		temp = temp->next;
	}

	return (sum12);
}

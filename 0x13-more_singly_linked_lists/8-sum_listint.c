#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data
 * @head: first node in the linked list
 *
 * Return: resulting sumUp
 */
int sum_listint(listint_t *head)
{
	int sumUp = 0;
	listint_t *temp = head;

	while (temp)
	{
		sumUp += temp->n;
		temp = temp->next;
	}

	return (sumUp);
}

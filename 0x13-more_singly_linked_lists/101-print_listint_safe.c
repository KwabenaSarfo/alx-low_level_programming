#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped.
 * @head: A pointer to the head of the listint_t.
 *
 * Return: 0.
 * Otherwise - the number of unique.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise3, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise3 = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise3 == hare)
		{
			tortoise3 = head;
			while (tortoise3 != hare)
			{
				nodes++;
				tortoise3 = tortoise3->next;
				hare = hare->next;
			}

			tortoise3 = tortoise3->next;
			while (tortoise3 != hare)
			{
				nodes++;
				tortoise3 = tortoise3->next;
			}

			return (nodes);
		}

		tortoise3 = tortoise3->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list.
 * @head: A pointer.
 *
 * Return: The number.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index1 = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index1 = 0; index1 < nodes; index1++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

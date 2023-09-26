#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t.
 *
 * Return: If the not looped - 0.
 * Otherwise - the number of unique nodes.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise17, *hare21;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise17 = head->next;
	hare21 = (head->next)->next;

	while (hare21)
	{
		if (tortoise17 == hare21)
		{
			tortoise17 = head;
			while (tortoise17 != hare21)
			{
				nodes++;
				tortoise17 = tortoise->next;
				hare21 = hare->next;
			}

			tortoise17 = tortoise->next;
			while (tortoise17 != hare)
			{
				nodes++;
				tortoise17 = tortoise->next;
			}

			return (nodes);
		}

		tortoise17 = tortoise->next;
		hare21 = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list.
 * @head: Pointer to the head.
 *
 * Return: The number of node.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index15 = 0;

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
		for (index15 = 0; index15 < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

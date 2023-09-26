#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search
 * Return: address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowMore = head;
	listint_t *faster = head;

	if (!head)
		return (NULL);

	while (slowMore && faster && fast->next)
	{
		faster = fast->next->next;
		slowMore = slow->next;
		if (faster == slow)
		{
			slowMore = head;
			while (slowMore != faster)
			{
				slowMore = slow->next;
				faster = fast->next;
			}
			return (faster);
		}
	}

	return (NULL);
}

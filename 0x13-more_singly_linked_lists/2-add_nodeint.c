/**
 * add_nodeint - adds a new node
 * @head: pointer
 * @n: data to insert
 *
 * Return: pointer to the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new12;

	new = malloc(sizeof(listint_t));
	if (!new12)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new12;

	return (new12);
}

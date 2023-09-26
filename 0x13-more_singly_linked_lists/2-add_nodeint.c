#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new12_node;

    new12_node = malloc(sizeof(listint_t));
    if (!new12_node)
        return (NULL);

    new12_node->n = n;
    new12_node->next = *head;
    *head = new12_node;

    return (new12_node);
}

int main(void)
{
    listint_t *head = NULL;

    add_nodeint(&head, 42);
    add_nodeint(&head, 21);

    return (0);
}

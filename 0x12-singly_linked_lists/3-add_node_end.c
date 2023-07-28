#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - This project adds a new node
* at the end of a linked list
* @head: double pointer to the list_t list
* @str: string to put in the new node
* Return: address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new2;
list_t *temp = *head;
unsigned int leng = 0;
while (str[leng])
leng++;

new2 = malloc(sizeof(list_t));
if (!new2)
return (NULL);

new2->str = strdup(str);
new2->len = leng;
new2->next = NULL;

if (*head == NULL)
{
*head = new2;
return (new2);
}

while (temp->next)
temp = temp->next;

temp->next = new2;

return (new2);
}

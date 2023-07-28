#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - a new node at the beginning of a linked list
* @head: double pointer to list_t list
* @str: new string to add in the node
*
* Return: the address of the new element, or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new1;
unsigned int leng = 0;

while (str[leng])
leng++;

new1 = malloc(sizeof(list_t));
if (!new1)
return (NULL);

new1->str = strdup(str);
new1->len = leng;
new1->next = (*head);
(*head) = new1;

return (*head);
}

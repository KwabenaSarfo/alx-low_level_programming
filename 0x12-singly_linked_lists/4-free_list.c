#include <stdlib.h>
#include "lists.h"

/**
* free_list - This project frees a linked list
* @head: list_t list to be freed
*/
void free_list(list_t *head)
{
list_t *temp3;

while (head)
{
temp3 = head->next;
free(head->str);
free(head);
head = temp3;
}
}

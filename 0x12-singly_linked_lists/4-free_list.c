#include "lists.h"

/**
 *free_list - Frees a list
 *@head: A pointer to the list header
 *
 */

void free_list(list_t *head)
{
list_t *tmp;
while (head != NULL)
{
tmp = head;
free(head->str);
free(head);
head = tmp->next;
}
}

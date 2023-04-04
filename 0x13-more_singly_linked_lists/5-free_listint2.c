#include "lists.h"

/**
*free_listint2 - free aLL linked list
*@head: pointer to the head of the list
*
*Return: void
*/

void free_listint2(listint_t **head)
{
listint_t **tmp = head;
listint_t *node;
if (tmp != NULL)
{
while (*head != NULL)
{
 node = *head;
 free(node);
 *head = (*head)->next;
}
*tmp = NULL;
}
}

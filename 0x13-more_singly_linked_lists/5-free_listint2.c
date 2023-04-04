#include "lists.h"

/**
*free_listint2 - free aLL linked list
*@head: pointer to the head of the list
*
*Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *ptr;
if (head == NULL)
{
return;
}
while (*head != NULL)
{
ptr = *head;
*head = ptr->next;
free(ptr);
}
}

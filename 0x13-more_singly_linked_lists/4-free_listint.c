#include "lists.h"

/**
 *free_listint - free all list
 *@head: A pointer to head of the list
 *Return: void
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}

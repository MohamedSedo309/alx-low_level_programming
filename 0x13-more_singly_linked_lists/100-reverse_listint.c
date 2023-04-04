#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer to head pointer o flist
 * Return: pointer to head of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *tmp;
listint_t *tmp2;
if (*head == NULL)
{
return (NULL);
}
while (*head != NULL)
{
tmp2 = head->next;
head->next = tmp;
tmp = head;
head = tmp2
}
}

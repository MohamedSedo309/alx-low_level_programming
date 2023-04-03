#include "lists.h"

/**
 * pop_listint - delete the head node
 * then return the head->n
 * @head: linked list
 * Return: head->n
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int m;
if (*head == NULL)
{
return (0);
}
tmp = *head;
m = tmp->n;
*head = tmp->next;
free(tmp);
}

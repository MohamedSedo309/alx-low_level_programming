#include "lists.h"
/**
 * add_dnodeint_end - add new node to head
 * @head: list header
 * @n: new node int
 * Return: new node pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node;
node = malloc(sizeof(dlistint_t));
if (node == NULL)
{
return (NULL);
}
node->n = n;
node->next = NULL;
if ((*head)->next != NULL)
{
*head = (*head)->next;
}
(*head)->next = node;
node->prev = *head;
return (node);
}

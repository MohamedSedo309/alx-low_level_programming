#include "lists.h"
/**
 * add_dnodeint - add new node to head
 * @head: list header
 * @n: new node int
 * Return: new node pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *node;
node = malloc(sizeof(dlistint_t));
if (node == NULL)
{
return (NULL);
}
node->n = n;
node->next = *head;
node->prev = NULL;
if (*head != NULL)
{
(*head)->prev = node;
}
*head = node;
return (node);
}

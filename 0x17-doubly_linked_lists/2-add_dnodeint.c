#include "lists.h"
/**
 * add_dnodeint - add new node to head
 * @h: list header
 * Return: new node pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t node;
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
(*head)->prev = new_node;
}
*head = new_node;
}

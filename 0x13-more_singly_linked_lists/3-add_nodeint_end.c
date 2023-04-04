#include "lists.h"

/**
 *add_nodeint_end - add a node to the end of a linked list
 *@head: pointer to the head of the list
 *@n: new node -> int
 *Return: address of the newly added node
 * or null if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *tmp;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new_node;
}
return (new_node);
}

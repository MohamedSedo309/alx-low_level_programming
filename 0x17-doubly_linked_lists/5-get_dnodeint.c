#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: list header
 * @index: index
 *
 * Return: node or NULL
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *node;
unsigned int i;
node = head;
i = 0;
while (node != NULL)
{
if (i == index)
{
return (node);
}
node = node->next;
i++;
}
return (NULL);
}

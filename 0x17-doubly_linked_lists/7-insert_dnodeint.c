#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: list header
 * @idx: index
 * @n: node->n
 * Return:  pointer to the new node
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
unsigned int i = 0;
dlistint_t *tmp;
dlistint_t *new_node;
if (h == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
if (idx == 0)
{
*h = new_node;
return (new_node);
}
tmp = *h;
while (i < (idx - 1))
{
tmp = tmp->next;
i++;
if (tmp == NULL)
{
free(new_node);
return (NULL);
}
}
new_node->next = tmp->next;
tmp->next = new_node;
return (new_node);
}

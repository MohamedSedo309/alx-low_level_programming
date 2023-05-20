#include "lists.h"

/**
 * insert_node - insert node to index
 * @tmp: the node to insert before
 * @n: node data
 * Return: pointer to inserted node
 */
dlistint_t *insert_node(dlistint_t *tmp, int n)
{
dlistint_t *node;
node = malloc(sizeof(struct dlistint_s));
if (!node)
{
return (NULL);
}
node->n = n;
node->next = tmp;
node->prev = tmp->prev;
tmp->prev->next = node;
tmp->prev = node;
return (node);
}

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: list header
 * @idx: index
 * @n: node->n
 * Return:  pointer to the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp;
if (idx == 0)
{
return (add_dnodeint(h, n));
}
if (!h)
{
return (NULL);
}
tmp = *h;
while ((idx != 0) && (tmp->next))
{
idx -= 1;
tmp = tmp->next;
if (idx == 0)
{
return (insert_node(tmp, n));
}
}
if (idx == 1)
{
return (add_dnodeint_end(h, n));
}
return (NULL);
}

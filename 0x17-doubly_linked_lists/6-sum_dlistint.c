#include "lists.h"

/**
 *  sum_dlistint - get sum of list->n
 * @head: list header
 * Return: sum
 */


int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *node;
for (node = head; node != NULL; node = node->next)
{
sum += node->n;
}
return (sum);
}

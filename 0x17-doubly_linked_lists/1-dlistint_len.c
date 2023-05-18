#include "lists.h"
/**
 * dlistint_len - get list length
 * @h: list header
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
int len = 0;
while (h != NULL)
{
h = h->next;
len++;
}
return (len);
}

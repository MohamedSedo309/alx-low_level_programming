#include "lists.h"
/**
 * print_dlistint - print double linked list elements.
 * @h: list header
 * Return: nodes count
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

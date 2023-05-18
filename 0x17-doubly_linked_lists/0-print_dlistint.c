#include "lists.h"
/**
 * print_dlistint - print double linked list elements.
 * @h: list header
 * Return: nodes count
 */
size_t print_dlistint(const dlistint_t *h)
{
int len = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
len++;
}
return (len);
}

#include "lists.h"

/**
 *listint_len - get the number of elements
 *in a linked listint_t list
 *@h: A pointer to the head of the list
 *Return: listint_t list length
 */

size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}

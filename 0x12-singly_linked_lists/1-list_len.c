#include "lists.h"

/**
 * list_len - get list lenth
 *@h: pointer to the list
 *
 *Return: lenth of list
*/

size_t list_len(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}

#include "lists.h"
/**
* print_list - prints all the elements of a list
*
* @h:pointer to single list
*
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
size_t i;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)");
}
printf("[%d] %s", h->len, h->str);
h = h->next;
i++;
}
return i;
}

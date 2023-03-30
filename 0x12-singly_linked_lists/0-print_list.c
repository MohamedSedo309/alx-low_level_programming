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
const list_t *l = h;
size_t i = 0;

while (l != NULL)
{
if (l->str != NULL)
printf("[%d] %s\n", l->len, l->str);
else
printf("[0] (nil)\n");
i += 1;
l = l->next;
}

return (i);
}

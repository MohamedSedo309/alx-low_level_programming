#include "lists.h"

/**
* print_list - prints all the elements of a list
*
* @h:pointer to single list
*
*Return: number of nodes
*/

size_t print_list(const list_t *h)
{
const list_t *tmp = h;
size_t i = 0;

while (tmp != NULL)
{
if (tmp->str != NULL)
printf("[%d] %s\n", tmp->len, tmp->str);
else
printf("[0] (nil)\n");
i += 1;
tmp = tmp->next;
}

return i;
}

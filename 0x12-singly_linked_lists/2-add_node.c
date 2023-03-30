#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: address to the new node or NULL
 * if failed
*/

list_t *add_node(list_t **head, const char *str)
{
char *dupstr;
int len;
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
dupstr = strdup(str);
if (dupstr == NULL)
{
free(new);
return (NULL);
}
for (len = 0; str[len];)
{
len++;
}
new->str = dupstr;
new->len = len;
new->next = *head;
*head = new;
return (new);
}

#include "lists.h"

/**
 *add_nodeint_end - add a node to the end of a linked list
 *@head: pointer to the head of the list
 *@n: new node -> int
 *Return: address of the newly added node
 * or null if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *list = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
while (list->next != NULL)
{
list = list->next;
}
new->n = n;
new->next = NULL;
list->next = new;
return (new);
}

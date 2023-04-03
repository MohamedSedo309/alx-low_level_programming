#include "lists.h"

/**
 *add_nodeint - Add a new node at the beginning
 *of a listint_t list
 *@head: A pointer to head of the list
 *@n: new node -> int
 *Return: NULL if function fails
 *Or address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}

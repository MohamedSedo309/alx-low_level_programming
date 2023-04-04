#include "lists.h"

/**
 * get_nodeint_at_index - returns pointer to a node
 * at index
 * @head: pointer to head pointer of linked list
 * @index: index to search for
 * Return: the node, or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
if (head == NULL)
{
return (NULL);
}
while ((i < index) && head != NULL)
{
head = head->next;
i++;
}
if (i == index)
{
return (head);
}
return (NULL);
}

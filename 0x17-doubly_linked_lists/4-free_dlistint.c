#include "lists.h"
/**
 * free_dlistint - frees all list
 * @head: list header
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
while (head != NULL)
{
dlistint_t *next = head->next;
free(head);
head = next;
}
}

#include "lists.h"

/**
 * sum_listint - sum all list data
 * @head: pointer to head pointer of linked list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
{
return (sum);
}
while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}

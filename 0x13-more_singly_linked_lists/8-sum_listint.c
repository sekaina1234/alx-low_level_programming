#include "lists.h"
/**
 * sum_listint - ...
 * @head: ...
 *
 * Return: ...
 */
int sum_listint(listint_t *head)
{
int s = 0;
while (head != NULL)
{
s += head->n;
head = head->next;
}
return (s);
}

#include "lists.h"
/**
 * pop_listint - ...
 * @head: ...
 *
 * Return: ...
 */
int pop_listint(listint_t **head)
{
listint_t *t;
int s;
if (head == NULL || *head == NULL)
return (0);
t = *head;
s = t->n;
*head = (*head)->next;
free(t);
return (s);
}

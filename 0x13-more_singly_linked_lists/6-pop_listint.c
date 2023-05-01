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
if (*head == NULL)
return (0);
t = *head;
*head = (*head)->next;
n = t->s;
free(t);
return (s);
}

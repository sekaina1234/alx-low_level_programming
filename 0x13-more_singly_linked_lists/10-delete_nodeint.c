#include "lists.h"
/**
 * delete_nodeint_at_index - ...
 * @head: ...
 * @index: ...
 *
 * Return: ...
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *c, *t;
unsigned int j;
if (*head == NULL)
return (-1);
if (index == 0)
{
t = *head;
*head = (*head)->next;
free(t);
return (1);
}
c = *head;
for (j = 0; j < index - 1; j++)
{
if (c->next == NULL)
return (-1);
c = c->next;
}
t = c->next;
c->next = t->next;
free(t);
return (1);
}

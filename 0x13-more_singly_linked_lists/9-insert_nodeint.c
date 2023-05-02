#include "lists.h"
/**
 * insert_nodeint_at_index - ...
 * @head: ...
 * @idx: ...
 * @n: ...
 *
 * Return: ...
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *n, *t;
unsigned int j;
if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (n == NULL)
return (NULL);
n->n = n;
if (idx == 0)
{
n->next = *head;
head = n;
return (n);
}
t = *head;
for (j = 0; t != NULL && i < idx - 1; j++)
t = t->n;
if (t == NULL)
{
free(n);
return (NULL);
}
n->next = t->next;
t->next = n;
return (n);
}

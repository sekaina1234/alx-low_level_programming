#include "lists.h"
/**
 * add_nodeint_end - ...
 *
 * @head: ...
 * @n: ...
 *
 * Return: ...
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *last;
if (!head)
return (NULL);
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (!*head)
{
*head = new;
}
else
{
last = *head;
while (last->next)
last = last->next;
last->next = new;
}
return (new);
}

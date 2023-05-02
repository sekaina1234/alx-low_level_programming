#include "lists.h"
/**
 * find_listint_loop - ...
 * @head: ...
 *
 * Return: ...
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *s, *f;
if (head == NULL)
return (NULL);
s = head->next;
f = head->next->next;
while (f && f->next)
{
if (s == f)
{
s = head;
while (s != f)
{
s = s->next;
f = f->next;
}
return (s);
}
s = s->next;
f = f->next->next;
}
return (NULL);
}

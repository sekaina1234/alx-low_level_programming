#include "lists.h"
/**
 * free_listint_safe - ...
 * @h: ...
 *
 * Return: ...
 */
size_t free_listint_safe(listint_t **h)
{
size_t s = 0;
listint_t *c, *t;
if (h == NULL || *h == NULL)
return (0);
c = *h;
while (c != NULL)
{
s++;
t = c;
c = c->next;
free(t);
if (t <= c)
break;
}
*h = NULL;
return (s);
}

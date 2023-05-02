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
unsigned int visited = 0;
if (!h || !(*h))
return (0);
c = *h;
while (c)
{
s++;
if (c->next >= c || visited > s)
{
t = c;
*h = NULL;
c = NULL;
free(t);
break;
}
t = c;
c = c->next;
visited++;
free(t);
}
return (s);
}

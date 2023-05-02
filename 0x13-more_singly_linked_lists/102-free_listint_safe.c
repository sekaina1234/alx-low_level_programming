#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#define HASH_SIZE 1024
/**
 * free_listint_safe - ...
 * @h: ...
 * Return: ...
 */
size_t free_listint_safe(listint_t **h)
{
size_t c = 0;
listint_t *cu, *s;
unsigned long int hash;
if (h == NULL)
return (0);
while (*h != NULL)
{
cu = *h;
hash = (unsigned long int)cu % HASH_SIZE;
for (s = cu->next; s != NULL; s = s->next)
{
if ((unsigned long int)s % HASH_SIZE == hash)
{
*h = NULL;
return (c);
}
}
*h = cu->next;
cu->next = NULL;
free(cu);
c++;
}
return (c);
}

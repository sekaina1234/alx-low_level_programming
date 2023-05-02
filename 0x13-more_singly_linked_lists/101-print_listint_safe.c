#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - ...
 * @head: ...
 *
 * Return: ...
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *c;
const listint_t *v[1024];
size_t co = 0;
size_t j;
c = head;
while (c != NULL)
{
for (j = 0; j < co; j++)
{
if (v[j] == c)
{
printf("-> [%p] %d\n", (void *)c, c->n);
return (co);
}
}
printf("[%p] %d\n", (void *)c, c->n);
if (co < 1024)
v[co] = c;
co++;
c = c->next;
}
return (co);
}

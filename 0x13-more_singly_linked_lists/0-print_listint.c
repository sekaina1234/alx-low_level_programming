#include "lists.h"
/**
 * print_listint - ...
 * @h: ...
 *
 * Return: ...
 */
size_t print_listint(const listint_t *h)
{
size_t c = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
c++;
}
return (c);
}

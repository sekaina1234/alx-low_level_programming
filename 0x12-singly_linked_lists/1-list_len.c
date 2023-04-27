#include <stdio.h>
#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
size_t l = 0;
while (h != NULL)
{
l++;
h = h->next;
}
return (l);
}

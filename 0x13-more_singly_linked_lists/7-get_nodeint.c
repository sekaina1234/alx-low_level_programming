#include "lists.h"
/**
 * get_nodeint_at_index - ...
 * @head: ...
 * @index: ...
 *
 * Return: ...
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int j;
listint_t *c;
c = head;
for (j = 0; current && j < index; j++)
c = c->next;
return (c ? c : NULL);
}

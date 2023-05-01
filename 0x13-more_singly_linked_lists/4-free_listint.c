#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - ...
 * @head: ...
 */
void free_listint(listint_t *head)
{
listint_t *t;
while (head != NULL)
{
t = head;
head = head->next;
free(t);
}
}

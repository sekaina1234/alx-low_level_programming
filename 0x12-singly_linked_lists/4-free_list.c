#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
list_t *t;
while (head != NULL)
{
t = head;
head = head->next;
free(t->str);
free(t);
}
}

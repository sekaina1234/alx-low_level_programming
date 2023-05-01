#include "lists.h"
/**
 * free_listint2 - ...
 * @head: ...
 *
 * Return: ...
 */
void free_listint2(listint_t **head)
{
listint_t *c;
if (head == NULL)
return;
while (*head != NULL)
{
c = *head;
*head = (*head)->next;
free(c);
}
}

#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - ...
 * @head: ...
 *
 * Return: ...
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *p = NULL;
listint_t *n = NULL;
while (*head)
{
n = (*head)->n;
(*head)->n = p;
p = *head;
*head = n;
}
*head = p;
return (*head);
}

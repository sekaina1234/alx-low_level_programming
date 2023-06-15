#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node
 * at a given position in a doubly linked list.
 * @h: A pointer to a pointer to the head of the list.
 * @idx: The index at which the new node should be inserted.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current = *h;
unsigned int count = 0;
if (idx == 0)
{
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}
while (current != NULL)
{
if (count == idx)
{
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = current->prev;
new_node->next = current;
current->prev->next = new_node;
current->prev = new_node;
return (new_node);
}
count++;
current = current->next;
}
return (NULL);
}

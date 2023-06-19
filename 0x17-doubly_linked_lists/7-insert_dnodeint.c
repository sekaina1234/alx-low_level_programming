#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the linked list.
 * @idx: Index of the list where the new node should be added.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int i = 0;

if (h == NULL)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;

if (*h == NULL)
{
*h = new_node;
return (new_node);
}

current = *h;
while (current != NULL)
{
if (i == idx)
{
new_node->next = current;
new_node->prev = current->prev;
if (current->prev != NULL)
current->prev->next = new_node;
current->prev = new_node;
if (i == 0)
*h = new_node;
return (new_node);
}
current = current->next;
i++;
}

if (i == idx)
{
new_node->prev = current->prev;
current->prev->next = new_node;
current->prev = new_node;
return (new_node);
}

free(new_node);
return (NULL);
}

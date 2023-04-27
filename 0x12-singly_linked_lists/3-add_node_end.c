#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the first element of the list.
 * @str: String to be added as the new element.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *last_node = *head;
size_t len = 0;
while (str && str[len])
len++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = len;
new->next = NULL;
if (!*head)
{
*head = new;
return (new);
}
while (last_node->next)
last_node = last_node->next;
last_node->next = new;
return (new);
}

#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list
 * @h: A pointer to the head of the list_t list
 *
 * Return: The number of nodes in the list_t list
 */
size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t i = 0;
while (current != NULL)
{
if (current->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", current->len, current->str);
current = current->next;
i++;
}
return (i);
}

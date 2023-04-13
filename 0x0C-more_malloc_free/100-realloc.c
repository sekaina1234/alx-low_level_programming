#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new;
unsigned int j;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
new = malloc(new_size);
if (new == NULL)
return (NULL);
return (new);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
new = malloc(new_size);
if (new == NULL)
return (NULL);
for (j = 0; j < old_size && j < new_size; j++)
new[j] = ((char *) ptr)[j];
free(ptr);
return (new);
}

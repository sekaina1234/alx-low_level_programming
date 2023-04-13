#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory, NULL if nmemb or size is 0
 * or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0, l = 0;
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
while (i < l)
{
p[i] = 0;
i++;
}
return (p);
}

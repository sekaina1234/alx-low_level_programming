#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0 (Sccess)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *ptr = dest;
for (i = 0; i < n; i++)
*(ptr + i) = *(src + i);
return (dest);
}

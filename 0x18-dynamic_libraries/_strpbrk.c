#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The set of bytes to search for
 *
 * Return: A pointer to the first occurrence in the string of any of the bytes
 * in the set, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *temp = accept;
while (*temp != '\0')
{
if (*s == *temp)
return (s);
temp++;
}
s++;
}

return (NULL);
}

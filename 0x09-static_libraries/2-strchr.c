#include <stdio.h>
#include "main.h"
/**
 * _strchr - Locates a character in a string.
 *
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: If c is found, returns a pointer to the first occurrence
 *         of the character c in s, otherwise, returns NULL.
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (NULL);
}

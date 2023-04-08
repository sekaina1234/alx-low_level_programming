#include <stdio.h>
#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: The string to search.
 * @needle: The substring to look for.
 *
 * Return: If needle is found, a pointer to the beginning of the located
 *         substring; otherwise, NULL.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *begin = haystack;
char *pattern = needle;
while (*haystack && *pattern && *haystack == *pattern)
{
haystack++;
pattern++;
}
if (!*pattern)
return (begin);
haystack = begin + 1;
}
return (NULL);
}

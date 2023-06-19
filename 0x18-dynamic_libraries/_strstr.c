#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates the first occurrence of a substring in a string
 * @haystack: The string to search in
 * @needle: The substring to find
 *
 * Return: If the substring is found, returns a pointer to the beginning of the
 *         substring within the string. If the substring is not found, returns
 *         NULL.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *haystack_ptr = haystack;
char *needle_ptr = needle;

while (*haystack_ptr == *needle_ptr && *needle_ptr != '\0')
{
haystack_ptr++;
needle_ptr++;
}

if (*needle_ptr == '\0')
return (haystack);

haystack++;
}

return (NULL);
}

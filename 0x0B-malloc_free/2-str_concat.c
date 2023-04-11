#include "main.h"
#include <stdlib.h>
#include <string.h>
/*
 * str_concat - Concatenates two strings of any size
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
size_t len1, len2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
concat = malloc(len1 + len2 + 1);
if (concat == NULL)
return (NULL);
memcpy(concat, s1, len1);
memcpy(concat + len1, s2, len2);
concat[len1 + len2] = '\0';
return (concat);
}

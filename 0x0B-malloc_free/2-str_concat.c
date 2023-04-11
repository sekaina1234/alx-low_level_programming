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
int len1 = 0, len2 = 0, len3 = 0, len4 = 0;
char *concat;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
len4 = len1 + len2;
concat = malloc((sizeof(char) * len4) +1);
if (concat == NULL)
return (NULL);
len2 = 0;
while (len3 <= len4)
{
if (len3 <= len1)
concat[len3] = s1[len3];
if (len3 >= len1)
{
concat[len3] = s2[len2];
len2++;
}
len3++;
}
concat[len3] = '\0';
return (concat);
}

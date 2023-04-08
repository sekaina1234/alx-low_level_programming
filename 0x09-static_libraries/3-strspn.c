#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to the string to be searched.
 * @accept: pointer to the string of characters to match.
 *
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, n;
n = 0;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
n++;
break;
}
}
if (!accept[j])
break;
}
return (n);
}

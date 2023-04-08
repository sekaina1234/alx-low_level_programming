#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 0 if the strings are equal, a negative value if s1 is less than s2,
 * or a positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] && s2[i]; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}
return (s1[i] - s2[i]);
}

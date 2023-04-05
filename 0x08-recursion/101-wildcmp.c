#include "main.h"
/**
 * wildcmp - compares two strings
 * otherwise returns 0. s2 can contain the special character *
 * (including an empty string).
 * @s1: the first string to compare.
 * @s2: the second string to compare.
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '\0')
{
return (*s1 == '\0');
}
else if (*s2 == '*')
{
if (wildcmp(s1, s2 + 1))
{
return (1);
}
if (*s1 != '\0' && wildcmp(s1 + 1, s2))
{
return (1);
}
return (0);
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}

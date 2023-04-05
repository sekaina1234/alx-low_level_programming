#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = strlen(s);
int i;
if (len == 0)
return (1);
if (s[0] != s[len - 1])
return (0);
s[len - 1] = '\0';
i = is_palindrome(s + 1);
s[len - 1] = s[0];
return (i);
}

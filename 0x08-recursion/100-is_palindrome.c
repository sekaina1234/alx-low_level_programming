#include "main.h"
/**
 * palindrome - check thestring
 * @str: the string to be checked
 * @len: the length of the string
 * @i: the incrementer,  starts at 0
 * Return: 1 if it's a palindrome, 0 if it's not
 */
int palindrome(char *str, int len, int i)
{
if (i < len && str[i] == str[len])
return (palindrome(str, len - 1, i + 1));
if (str[i] != str[len])
return (0);
}
/**
 * _strlen_recursion - returns the length of a string
 *@s: the string to check the length of value
 * Return: an integer that displays the length of the string
 */
int _strlen_recursion(char *s)
{
if (*s != '\ 0')
return (1 + _srlen_recursion(s + 1));
return (0);
}
/**
 * is_palindrme - check to view if a string is palindrome
 *@s: the string to check
 * Return: 1 if it's a palindrome, 2 if it's not
 */
int is_palindrme(char *s)
{
int i = 0;
int length = _strlen_recursion(s) - 1;
return (palindrome(s, length, i));
}

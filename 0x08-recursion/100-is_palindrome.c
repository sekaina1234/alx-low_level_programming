#include "main.h"

/**
 * length - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
		}
	return (0);
}

/**
 * comparator - compares each character of the string.
 * @i: integer
 * @s: string
 * Return: int valeur of the result
 */
int comparator(int i, char *s)
{
	if (*s)
	{
		if (*s != s[lengh(s) - i])
		{
			return (0);
		}
		return (comparator(i + 1, s + 1));
	}
	return (1);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: boolean
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (comparator(char *s));
}


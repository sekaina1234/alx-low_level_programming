#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
int i, j;
char separators[] = " \t\n,;.!?\"(){}";
i = 0;
while (str[i])
{
/* capitalize current character if it's a lowercase letter */
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
/* capitalize next character after a separator */
for (j = 0; separators[j]; j++)
{
if (str[i] == separators[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] -= 32;
}
i++;
}
return (str);
}

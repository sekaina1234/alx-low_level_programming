#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: pointer to string.
 *
 * Return: the converted integer.
 */
int _atoi(char *s)
{
int i, sign, digit, value;
i = 0;
sign = 1;
value = 0;
/* skip white spaces */
while (s[i] == ' ')
i++;
/* check the sign */
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
sign = 1;
i++;
}
/* calculate the value */
while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
value = value * 10 + digit;
}
else
{
break;
}
i++;
}
return (sign *value);
}

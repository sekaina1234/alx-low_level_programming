#include "main.h"
/**
 * isalpha - check the code
 * Return: Always 0.
 */
int isalpha(void)
{
if ((c >= 97 && c <= 122) | (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

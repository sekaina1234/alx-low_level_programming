#include "main.h"
#include <stdio.h>
/**
 * puts_half - Prints the second half of a string
 * @str: The input string
 *
 * Return: void
 */
void puts_half(char *str)
{
int len = 0, i, half;
while (str[len] != '\0')
len++;
if (len % 2 == 0)
half = len / 2;
else
half = (len + 1) / 2;
for (i = half; i < len; i++)
_putchar(str[i]);
_putchar('\n');
}

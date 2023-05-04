#include "main.h"
#include <stdio.h>
/**
 * print_binary - ...
 * @n: ...
 *
 * Return: ...
 */
void print_binary(unsigned long int n)
{
unsigned long int m = 1;
int j;
while ((m << 1) <= n)
m <<= 1;
for (j = 0; m > 0; m >>= 1, j++)
{
if (n & m)
_putchar('1');
else
_putchar('0');
}
if (j == 0)
_putchar('0');
}

#include "main.h"
/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 *
 * Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int f = n ^ m;
unsigned int c = 0;
while (f != 0)
{
if (f & 1)
c++;
f >>= 1;
}
return (c);
}

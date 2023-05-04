#include "main.h"
/**
 * set_bit - ...
 * @n: ...
 * @index: ...
 *
 * Return: ...
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int m = 1;
if (index >= sizeof(unsigned long int) * 8)
return (-1);
m <<= index;
*n |= m;
return (1);
}

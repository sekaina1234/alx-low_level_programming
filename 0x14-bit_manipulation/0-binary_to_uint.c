#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - ...
 * @b: ...
 *
 * Return: ...
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int r = 0;
if (b == NULL)
return (0);
while (*b)
{
if (*b != '0' && *b != '1')
return (0);
r <<= 1;
r += *b - '0';
b++;
}
return (r);
}

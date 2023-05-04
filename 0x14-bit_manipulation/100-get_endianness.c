#include "main.h"
/**
 * get_endianness - ...
 *
 * Return: ...
 */
int get_endianness(void)
{
unsigned int y = 1;
char *c = (char *)&y;
if (*c)
return (1);
else
return (0);
}

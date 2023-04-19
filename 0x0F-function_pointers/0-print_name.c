#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints a name
 * @name: The name to print
 * @f: Pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}

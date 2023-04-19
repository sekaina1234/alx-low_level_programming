#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: The name to prints
 * @f: Pointer to function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
void print_name_as_is(char *name)
{
printf("Hello, my name is %s\n", name);
}
void print_name_uppercase(char *name)
{
unsigned int i = 0;
printf("Hello, my uppercase name is ");
while (name[i])
{
if (name[i] >= 'a' && name[i] <= 'z')
{
putchar(name[i] + 'A' - 'a');
}
else
{
putchar(name[i]);
}
i++;
}
putchar('\n');
}
int main(void)
{
print_name("Bob", print_name_as_is);
print_name("Bob Dylan", print_name_uppercase);
return (0);
}

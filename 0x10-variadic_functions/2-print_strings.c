#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 * @separator: the separator string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: variable number of strings to be printed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int j;
char *st;
va_start(args, n);
for (j = 0; j < n; j++)
{
st = va_arg(args, char *);
if (st == NULL)
printf("(nil)");
else
printf("%s", st);
if (j != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(args);
printf("\n");
}

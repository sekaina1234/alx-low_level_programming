#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int j;
va_list args;
va_start(args, n);
for (j = 0; j < n; j++)
{
printf("%d", va_arg(args, int));
if (separator != NULL && j != n - 1)
printf("%s", separator);
}
va_end(args);
printf("\n");
}

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * c: char
 * a: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 * any other char should be ignored
 */
void print_all(const char * const format, ...)
{
va_list args;
int a = 0, j = 0;
char *s;
va_start(args, format);
while (format && format[a])
{
j = 0;
switch (format[a])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'a':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
s = "(nil)";
printf("%s", s);
break;
default:
j = 1;
break;
}
if (format[a + 1] && !j)
printf(", ");
a++;
}
va_end(args);
printf("\n");
}

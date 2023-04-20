#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments passed to the function.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int S = 0;
unsigned int j;
if (n == 0)
return (0);
va_start(args, n);
for (j = 0; j < n; j++)
S += va_arg(args, int);
va_end(args);
return (S);
}

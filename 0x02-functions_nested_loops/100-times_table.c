#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: integer to print the multiplication table for
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
return;
for (int row = 0; row <= n; row++)
{
for (int col = 0; col <= n; col++)
{
int product = row * col;
printf("%3d", product);
if (col < n)
printf(", ");
}
printf("\n");
}
}

#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to print the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
if (n < 0)
{
last_digit = last_digit * -1;
}
_putchar('0' + last_digit);
return (last_digit);
}

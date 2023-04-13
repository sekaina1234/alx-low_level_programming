#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
return (c >= '0' && c <= '9');
}
/**
 * mul - multiplies two numbers represented as arrays of digits
 * @num1: the first number to multiply
 * @len1: the length of num1
 * @num2: the second number to multiply
 * @len2: the length of num2
 *
 * Return: a pointer to an array containing the product
 */
int *mul(char *num1, int len1, char *num2, int len2)
{
int a, b, c, carry, s;
int *result;
result = calloc(len1 + len2, sizeof(int));
if (result == NULL)
return (NULL);
for (a = len1 - 1; a >= 0; a--)
{
carry = 0;
for (b = len2 - 1; b >= 0; b--)
{
c = a + b + 1;
s = carry + result[c] + (num1[a] - '0') * (num2[b] - '0');
result[c] = s % 10;
carry = s / 10;
}
result[a + b + 1] = carry;
}
return (result);
}
/**
 * print_num - prints a number represented as an array of digits
 * @num: the number to print
 * @len: the length of num
 */
void print_num(int *num, int len)
{
int a;
for (a = 0; a < len && num[a] == 0; a++)
;
if (a == len)
putchar('0');
for (; a < len; a++)
putchar(num[a] + '0');
putchar('\n');
}
/**
 * main - entry point
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
char *num1, *num2;
int len1, len2, *result, a;
if (argc != 3)
{
printf("Error\n");
return (98);
}
num1 = argv[1];
num2 = argv[2];
for (a = 0; num1[a] != '\0'; a++)
{
if (!_isdigit(num1[a]))
{
printf("Error\n");
return (98);
}
}
len1 = a;
for (a = 0; num2[a] != '\0'; a++)
{
if (!_isdigit(num2[a]))
{
printf("Error\n");
return (98);
}
}
len2 = a;
result = mul(num1, len1, num2, len2);
if (result == NULL)
return (98);
print_num(result, len1 + len2);
free(result);
return (0);
}

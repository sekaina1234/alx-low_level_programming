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
int i, j, k, carry, sum;
int *result;
result = calloc(len1 + len2, sizeof(int));
if (result == NULL)
return (NULL);
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
k = i + j + 1;
sum = carry + result[k] + (num1[i] - '0') * (num2[j] - '0');
result[k] = sum % 10;
carry = sum / 10;
}
result[i + j + 1] = carry;
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
int i;
for (i = 0; i < len && num[i] == 0; i++)
;
if (i == len)
putchar('0');
for (; i < len; i++)
putchar(num[i] + '0');
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
int len1, len2, *result, i;
if (argc != 3)
{
printf("Error\n");
return (98);
}
num1 = argv[1];
num2 = argv[2];
for (i = 0; num1[i] != '\0'; i++)
{
if (!_isdigit(num1[i]))
{
printf("Error\n");
return (98);
}
}
len1 = i;
for (i = 0; num2[i] != '\0'; i++)
{
if (!_isdigit(num2[i]))
{
printf("Error\n");
return (98);
}
}
len2 = i;
result = mul(num1, len1, num2, len2);
if (result == NULL)
return (98);
print_num(result, len1 + len2);
free(result);
return (0);
}

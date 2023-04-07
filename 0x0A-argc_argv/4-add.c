#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - Check if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int is_digit(char c)
{
return (c >= '0' && c <= '9');
}
/**
 * main - Entry point. Adds positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 if success, 1 otherwise.
 */
int main(int argc, char *argv[])
{
int i, j, sum = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!is_digit(argv[i][j]) && argv[i][j] != '-')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}

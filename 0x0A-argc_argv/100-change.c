#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing the arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
int cents, coins = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
while (cents >= 25)
{
cents -= 25;
coins++;
}
while (cents >= 10)
{
cents -= 10;
coins++;
}
while (cents >= 5)
{
cents -= 5;
coins++;
}
while (cents >= 2)
{
cents -= 2;
coins++;
}
coins += cents;
printf("%d\n", coins);
return (0);
}
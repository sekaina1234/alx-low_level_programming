#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on success, 1 if number of arguments is incorrect,
 *         2 if number of bytes is negative
 */
int main(int argc, char **argv)
{
int i, num_bytes;
if (argc != 2)
{
printf("Error\n");
return (1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}
for (i = 0; i < num_bytes; i++)
printf("%02x ", *((unsigned char *)main + i));
printf("\n");
return (0);
}

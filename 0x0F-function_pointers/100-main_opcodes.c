#include <stdio.h>
#include <stdlib.h>
void print_opcodes(char *addr, int len);
/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments passed to the program
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int num_bytes;
char *addr = (char *)main;
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
print_opcodes(addr, num_bytes);
return (0);
}
/**
 * print_opcodes - prints the opcodes of a given address
 * @addr: the starting address to print from
 * @len: the number of bytes to print
 */
void print_opcodes(char *addr, int len)
{
int i;
for (i = 0; i < len; i++)
printf("%02hhx ", *(addr + i));
printf("\n");
}

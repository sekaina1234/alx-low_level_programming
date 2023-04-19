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
int num_bytes, i;
char *addr;
if (argc != 2)
{
printf("Error\n");
return (1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}
addr = (char *)main;
for (i = 0; i < num_bytes; i++)
{
if (i == num_bytes - 1)
{
printf("%02hhx\n", (addr[i]));
break;
}
printf("%02hhx ", addr[i]);
}
return (0);
}

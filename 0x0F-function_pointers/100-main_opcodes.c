#include <stdio.h>
#include <stdlib.h>
void print_opcodes(char *function_ptr, int num_bytes);
/**
 * main - ...
 * @argc: ...
 * @argv: ...
 *
 * Return: ...
 */
int main(int argc, char **argv)
{
int num_bytes;
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
print_opcodes((char *)&main, num_bytes);
return (0);
}
/**
 * print_opcodes - ...
 * @function_ptr: ...
 * @num_bytes: ...
 */
void print_opcodes(char *function_ptr, int num_bytes)
{
int i;
for (i = 0; i < num_bytes; i++)
{
printf("%02x ", *(unsigned char *)(function_ptr + i));
}
printf("\n");
}

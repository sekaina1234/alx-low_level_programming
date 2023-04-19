#include <stdio.h>
#include <stdlib.h>
/**
 * main - ...
 * @argc: ...
 * @argv: ...
 *
 * Return: ...
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
char *opcodes = (char *) main;
for (i = 0; i < num_bytes; i++)
{
printf("%02x ", opcodes[i] & 0xff);
}
printf("\n");
return (0);
}

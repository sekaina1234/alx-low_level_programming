#include <stdio.h>
#include <stdlib.h>
/**
 * main - ...
 * @argc: ...
 * @argv: ...
 *
 * Return: ...
 */
int main(int argc, char *argv[])
{
int num_bytes, j;
char *arr;
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
arr = (char *)main;
for (j = 0; j < num_bytes; j++)
{
if (j == num_bytes - 1)
{
printf("%02hhx\n ", arr[j]);
break;
}
printf("%02hhx", arr[j]);
}
return (0);
}

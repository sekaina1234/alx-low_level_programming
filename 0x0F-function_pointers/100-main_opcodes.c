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
int num, j;
if (argc != 2)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);
if (num < 0)
{
printf("Error\n");
exit(2);
}
for (j = 0; j < num; j++)
{
printf("%02hhx\n ", *((char *)main + j));
if (j < num - 1)
printf(" ");
else
printf("\n");
}
return (0);
}

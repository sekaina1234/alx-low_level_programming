#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - convert the params passed to the program to string
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: ...
 */
char *argstostr(int ac, char **av)
{
int i, j, k;
char *str;
int len = 0;
int total_len = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
len = 0;
while (av[i][len] != '\0')
len++;
total_len += len + 1;
}
str = malloc(sizeof(char) * total_len);
if (str == NULL)
return (NULL);
k = 0;
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
str[k] = av[i][j];
j++;
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}

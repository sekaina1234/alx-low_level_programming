#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: a pointer to the concatenated string
 *         or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int i = 0, j = 0, k = 0, len = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
while (i < ac)
{
while (av[i][j])
{
len++;
j++;
}
j = 0;
i++;
}
str = malloc((sizeof(char) * len) +ac + 1);
i = 0;
while (av[i])
{
while (av[i][j])
{
str[k] = av[i][j];
k++;
j++;
}
str[k] = '\n';
j = 0;
k++;
i++;
}
k++;
str[k] = '\0';
return (str);
}

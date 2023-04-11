#include "main.h"
#include <stdlib.h>
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
int i, j, k = 0, len = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
/* compute the total length of the arguments */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++; /* account for the newline character */
}
/* allocate memory for the concatenated string */
str = malloc(sizeof(char) * len);
if (str == NULL)
return (NULL);
/* copy the arguments into the string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k++] = av[i][j];
}
str[k++] = '\n';
}
str[k] = '\0';
return (str);
}

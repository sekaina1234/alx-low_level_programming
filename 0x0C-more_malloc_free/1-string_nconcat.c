#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes of s2 to concatenate.
 *
 * Return: If the function succeeds, a pointer to the concatenated string.
 *         Otherwise, NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *conc;
unsigned int k = 0, l = 0, i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[k])
k++;
while (s2[l])
l++;
if (n >= l)
n = l;
conc = malloc(sizeof(char) * (k + n + 1));
if (conc == NULL)
return (NULL);
for (i = 0; i < k; i++)
conc[i] = s1[i];
for (j = 0; j < n; j++)
conc[i + j] = s2[j];
conc[i + j] = '\0';
return (conc);
}

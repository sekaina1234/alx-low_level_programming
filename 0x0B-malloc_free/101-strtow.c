#include <stdlib.h>
#include "main.h"
/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words in the string.
 */
static int count_words(char *str)
{
int count = 0, i = 0;
while (str[i])
{
/* Skip spaces */
while (str[i] && str[i] == ' ')
i++;
/* Count word */
if (str[i] && str[i] != ' ')
{
count++;
while (str[i] && str[i] != ' ')
i++;
}
}
return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if str is NULL or
 * if memory allocation fails.
 */
char **strtow(char *str)
{
char **words;
int i = 0, j = 0, k = 0, len = 0, count = 0;
if (str == NULL || *str == '\0')
return (NULL);
count = count_words(str);
words = malloc(sizeof(char *) * (count + 1));
if (words == NULL)
return (NULL);
for (i = 0; i < count; i++)
{
/* Skip spaces */
while (str[j] && str[j] == ' ')
j++;
/* Get word length */
len = 0;
while (str[j + len] && str[j + len] != ' ')
len++;
/* Allocate memory for word */
words[i] = malloc(sizeof(char) * (len + 1));
if (words[i] == NULL)
{
/* Free previously allocated memory */
for (k = 0; k < i; k++)
free(words[k]);
free(words);
return (NULL);
}
/* Copy word into array */
for (k = 0; k < len; k++)
words[i][k] = str[j + k];
words[i][k] = '\0';
/* Move to next word */
j += len;
}
words[i] = NULL;
return (words);
}

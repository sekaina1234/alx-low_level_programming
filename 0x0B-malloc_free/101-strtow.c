#include "main.h"
#include <stdlib.h>
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
 * word_len - Locates the count ,aking the end
 * @str: The string to count words in.
 *
 * Return: The number of words in the string.
 */
int word_len(char *str)
{
int count = 0, i = 0;
while (*(str + count) && *(str + count) != ' ')
{
i++;
count++;
}
return (i);
}
/**
 * count_words - Counts the number of words contaned within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int count_words(char *str)
{
int count = 0, words = 0, i = 0;
for (count = 0; count < i; count++)
{
if (*(str + count) != ' ')
{
words++;
count += word_len(str + count);
}
}
return (words);
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
char **strings;
int count = 0, words, w, letters, l;
if (str == NULL || str[0] == '\0')
return (NULL);
words = count_words(str);
if (words == 0)
return (NULL);
strings = malloc(sizeof(char *) * (words + 1));
if (strings == NULL)
return (NULL);
for (w = 0; w < words; w++)
{
while (str[count] == ' ')
count++;
letters = word_len(str + count);
strings[w] = malloc(sizeof(char) * (letters + 1));
if (strings[w] == NULL)
{
for (; w >= 0; w--)
free(strings[w]);
free(strings);
return (NULL);
}
for (l = 0; l < letters; l++)
strings[w][l] = str[count++];
strings[w][l] = '\0';
}
strings[w] = NULL;
return (strings);
}

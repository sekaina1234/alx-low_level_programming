#include "main.h"
#include <stdlib.h>
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
 * word_len - Locates the index making the end of the
 *            first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
int flag = 0, len = 0;
while (*(str + flag) && *(str + flag) != ' ')
{
len++;
flag++;
}
return (len);
}
/**
 * count_words - Counts the number of words contaned within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int count_words(char *str)
{
int flag = 0, words = 0, len = 0;
for (flag = 0; *(str + flag); flag++)
len++;
for (flag = 0; flag < len; flag++)
{
if (*(str + flag) != ' ')
{
words++;
flag += word_len(str + flag);
}
}
return (words);
}
/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: If str =NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
char **strings;
int flag = 0, words, w, letters, l;
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
while (str[flag] == ' ')
flag++;
letters = word_len(str + flag);
strings[w] = malloc(sizeof(char) * (letters + 1));
if (strings[w] == NULL)
{
for (; w >= 0; w--)
free(strings[w]);
free(strings);
return (NULL);
}
for (l = 0; l < letters; l++)
strings[w][l] = str[flag++];
strings[w][l] = '\0';
}
strings[w] = NULL;
return (strings);
}

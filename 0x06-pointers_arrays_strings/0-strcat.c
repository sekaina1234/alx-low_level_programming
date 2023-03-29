#include "main.h"

/**
 * _strcat - cating  of a string src to a string dest
 * @src: the src string
 * @dest: the dest string
 * Return: a pointer to the the dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i + 1] = '\0';
	return (dest);
}

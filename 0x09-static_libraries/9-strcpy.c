#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src, including the terminating
 * null byte, to the buffer pointed to by dest
 * @dest: The buffer to copy the string to
 * @src: The string to be copied
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}

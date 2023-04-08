#include "main.h"
#include <unistd.h>
/**
 * _puts - prints a string followed by a new line to stdout
 * @str: the string to be printed
 */
void _puts(char *str)
{
int len = 0;
while (str[len] != '\0')
{
len++;
}
write(STDOUT_FILENO, str, len);
write(STDOUT_FILENO, "\n", 1);
}

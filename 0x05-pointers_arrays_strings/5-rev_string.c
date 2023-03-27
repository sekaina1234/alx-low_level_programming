#include <stdio.h>
/**
 * rev_string - Reverses a string.
 * @s: String to be reversed.
 */
void rev_string(char *s)
{
int i, j;
char temp;
for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}

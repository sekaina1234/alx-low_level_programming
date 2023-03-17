#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints the alphabet in lowercase, and then in uppercase,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase, uppercase;
/* Print lowercase alphabet */
lowercase = 'a';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
/* Print uppercase alphabet */
uppercase = 'A';
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}
/* Print new line */
putchar('\n');
return (0);
}


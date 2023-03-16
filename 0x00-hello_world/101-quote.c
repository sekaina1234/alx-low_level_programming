#include <unistd.h>
/**
 * main - a C program that prints exactly
 * Return: 1 (Succss)
*/
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, str, sizeof(str) - 1);
return (1);
}


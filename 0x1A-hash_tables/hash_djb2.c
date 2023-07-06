#include <stdio.h>
/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;
hash = 5381;
while ((c = *str++))
hash = ((hash << 5) + hash) +c;
return (hash);
}
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
const unsigned char *str = "Hello, World!";
unsigned long int hash_value = hash_djb2(str);
printf("Hash Value: %lu\n", hash_value);
return (0);
}

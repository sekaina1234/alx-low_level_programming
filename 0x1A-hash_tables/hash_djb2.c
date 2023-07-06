/**
 * hash_djb2 - Implements the djb2 hash algorithm
 * @str: The input string
 *
 * Return: The hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;
hash = 5381;
while ((c = *str++))
{
hash = ((hash << 5) + hash) +c;
}
return (hash);
}

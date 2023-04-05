#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - checks if a number is prime
 * @n: integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n < 2) /* 0 and 1 are not prime */
return (0);
return (check_prime(n, 2));
}
/**
 * check_prime - checks if a number is prime recursively
 * @n: integer to check
 * @i: divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
if (i == n) /* base case: checked all divisors */
return (1);
if (n % i == 0) /* n is divisible by i */
return (0);
return (check_prime(n, i + 1)); /* check next divisor */
}

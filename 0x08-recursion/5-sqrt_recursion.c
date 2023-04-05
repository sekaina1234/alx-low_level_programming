#include "main.h"
/**
 * _sqrt - returns the natural square root of a number
 * @n: number to find square root of
 * @i: iterator to test possible roots
 *
 * Return: natural square root of n or -1 if none
 */
int _sqrt(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 *
 * Return: natural square root of n or -1 if none
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(n, 0));
}

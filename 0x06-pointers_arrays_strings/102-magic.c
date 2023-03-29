#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a[] = {98, 402, 1024, 2048, 3072, 5096};
int *p;
p = a;
/* Add your new line of code here */
*(p + 2) = 98;
print("a[2] = %d\n", a[2]);
return (0);
}

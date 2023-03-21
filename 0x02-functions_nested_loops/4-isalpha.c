#include "main.h"
/**
 *main - check the code
 *Return: Always 0.
 */
int main(void)
{
int n;
n = 0;
printf("%d\n", print_sign(n));
n = 98;
printf("%d\n", print_sign(n));
n = 0xff;
printf("%d\n", print_sign(n));
n = -1;
printf("%d\n", print_sign(n));
return (0);
}

#include <stdio.h>
/**
 * main - entry point
 *
 * Description: A c program that prints with printf function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int sum;
sum = 0;
int n;
for (n = 0; n <= 1024; n++)
{
if ((n % 3 == 0) || (n % 5 == 0))
{
sum = sum + n;
}
}
printf("%d\n", sum);
return (0);
}

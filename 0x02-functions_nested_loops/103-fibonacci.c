#include <stdio.h>
/**
* main - Entry point
*
* Description: A c program that prints with printf function
*
* Return: Always 0 (success)
*/
int main(void)
{
long int x, y, s, sum;
x = 0;
y = 1;
sum = 0;
while (s <= 4000000)
{
s = x + y;
if (s % 2 == 0)
sum += s;
x = y;
y = s;
}
printf("%ld\n", sum);
return (0);
}

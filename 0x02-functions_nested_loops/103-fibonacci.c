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
x = 1;
y = 2;
s = x + y;
sum = 0;
while (s <= 4000000)
{
if (y % 2 == 0)
sum += y;
x = y;
y = s;
s = x + y;
}
printf("%ld\n", sum);
return (0);
}

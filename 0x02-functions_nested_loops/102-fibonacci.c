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
long long x, y, s;
x = 1;
y = 2;
s = x + y;
while (s != 20365011074)
{
printf("%d, ", x);
printf("%d, ", y);
printf("%d, ", s);
x = y;
y = s;
}
printf("\n");
return (0);
}

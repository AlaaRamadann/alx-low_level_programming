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
long int x, y, s;
x = 1;
y = 2;
s = x + y;
while (s != 20365011074)
{
printf("%ld, ", x);
printf("%ld, ", y);
printf("%ld, ", s);
x = y;
y = s;
}
printf("\n");
return (0);
}

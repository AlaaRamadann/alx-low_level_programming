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
printf("%ld, ", x);
printf("%ld, ", y);
while (s <= 20365011074)
{
printf("%ld, ", s);
x = y;
y = s;
s = x + y;
}
printf("\n");
return (0);
}

#include <stdio.h>
/**
* main - Entry point
*
* Description: A c program that prints digit numbers with putchar function
*
* Return: Always 0 (success)
*/
int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
putchar(48 + a);
if (a != 9)
{
putchar(',');
}
putchar(' ');
}
return (0);
}

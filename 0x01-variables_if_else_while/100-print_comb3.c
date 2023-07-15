#include <stdio.h>
/**
* main - Entry point
*
* Description: A c program that print combinations of two digits
*
* Return: Always 0 (success)
*/
int main(void)
{
int n1, n2;
for (n1 = 0; n1 < 9; n1++)
{
for (n2 = 0; n2 <= 9; n2++)
{
if (n1 != n2 && n1 < n2)
{
putchar(n1 + 48);
putchar(n2 + 48);
if (n1 + n2 != 17)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

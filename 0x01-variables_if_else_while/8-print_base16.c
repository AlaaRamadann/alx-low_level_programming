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
int a, c;
for (a = 0; a < 10; a++)
putchar(48 + a);
for (c = 'a'; c >= 'f'; c++)
putchar(c);
putchar('\n');
return (0);
}

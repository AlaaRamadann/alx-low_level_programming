#include <stdio.h>
/**
* main - Entry point
*
* Description: A c program that prints the alphabet with putchar function
*
* Return: Always 0 (success)
*/
int main(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}

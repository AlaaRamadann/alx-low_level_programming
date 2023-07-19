#include <stdio.h>
#include "main.h"
void print_alphabet(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
/**
* main - Entry point
*
* print_alphabet -  print alphabet utilizes _putchar function
*
*  Return: Always 0 (success)
*/
int main(void)
{
print_alphabet();
return (0);
}

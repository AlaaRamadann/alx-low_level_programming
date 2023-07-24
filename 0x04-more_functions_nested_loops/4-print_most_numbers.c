#include "main.h"
/**
 *  print_most_numbers - function that prints the numbers, from 0 to 9
 *
 *  Description: A c program prints digits
 *
 *  Return: no return
 */
void print_most_numbers(void)
{
int x;
for (x = 48; x <= 57; x++)
{
if (x == 50 || x == 52)
continue;
else
_putchar(x);
}
_putchar('\n');
}

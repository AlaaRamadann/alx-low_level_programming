#include "main.h"
/**
 *  more_numbers - function that prints 10 times the numbers
 *
 *  Description: A c program prints from 0 to 14
 *
 *  Return: no return
 */
void more_numbers(void)
{
int i, j, x;
x = j % 10;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar((j / 10) + 48);
}
_putchar(x + 48);
}
_putchar('\n');
}
}

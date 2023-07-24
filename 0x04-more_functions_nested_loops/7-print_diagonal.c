#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: is the number of times the character \ should be printed
 *
 * Return: no return
 */
void print_diagonal(int n)
{
int row, spaces;
if (n <= 0)
_putchar('\n');
else
{
for (row = 1; row <= n; row++)
{
for (spaces = 1; spaces <= row; spaces++)
{
if (spaces == row)
_putchar('\');
else
_putchar(' ');
}
_putchar('\n');
}
}
}

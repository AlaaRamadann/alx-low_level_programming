#include "main.h"
/**
 * print_square - function that prints a square
 *
 * @size: is the size of the square
 *
 * Return: no return
 */
void print_square(int size)
{
int row, square;
if (size <= 0)
_putchar('\n');
else
{
for (row = 1; row <= size; row++)
{
for (square = 1; square <= size; square++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

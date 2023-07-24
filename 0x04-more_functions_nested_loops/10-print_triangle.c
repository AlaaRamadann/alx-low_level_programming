#include "main.h"
/**
 * print_triangle - function that prints a triangle
 *
 * @size: is the size of the triangle
 *
 * Return: no return
 */
void print_triangle(int size)
{
int row, triangle, s;
if (size <= 0)
_putchar('\n');
else
{
for (row = 1; row <= size; row++)
{
for (s = 1; s <= size - row; s++)
_putchar(' ');
for (triangle = row; triangle > 0; triangle--)
_putchar('#');
}
_putchar('\n');
}
}

#include "main.h"
/**
 * print_times_table - function that prints the n times table
 *
 * @n: number of time table
 *
 * Return: no return
 */
void print_times_table(int n)
{
int i, j;
if (!(n < 0 || n > 15))
{
for (i = 0; i <= n; i++)
{
_putchar(48);
for (j = 1; j <= n; j++)
{
if (i * j <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(i * j + 48);
}
else if ((i * j > 9) && (i * j <= 99))
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(((i * j) / 10) + 48);
_putchar(((i * j) % 10) + 48);
}
else if (i * j > 99)
{
_putchar(',');
_putchar(' ');
_putchar((((i * j) / 10) / 10) + 48);
_putchar((((i * j) / 10) % 10) + 48);
_putchar(((i * j) % 10) + 48);
}
}
_putchar('\n');
}
}
}

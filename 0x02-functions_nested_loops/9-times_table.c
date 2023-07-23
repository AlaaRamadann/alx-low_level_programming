#include "main.h"
/**
 *times_table - function that prints the 9 times table
 *
 *Return: no return
 */
void times_table(void)
{
int g, m, p;
p = g * m;
for (g = 0; g <= 9; g++)
{
for (m = 0; m <= 9; m++)
{
if (p <= 9)
_putchar(p + 48);
else
{
_putchar((p / 10) + 48);
_putchar((p % 10) + 48);
}
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar('\n');
}
}

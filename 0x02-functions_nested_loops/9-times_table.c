#include "main.h"
/**
 *times_table - function that prints the 9 times table
 *
 *Return: no return
 */
void times_table(void)
{
int g, m;
for (g = 0; g <= 9; g++)
{
_putchar(48);
for (m = 1; m <= 9; m++)
{
_putchar(',');
_putchar(' ');
if ((g * m) <= 9)
{
_putchar(' ');
_putchar((g * m) + 48);
}
else
{
_putchar(((g * m) / 10) + 48);
_putchar(((g * m) % 10) + 48);
}
}
_putchar('\n');
}
}

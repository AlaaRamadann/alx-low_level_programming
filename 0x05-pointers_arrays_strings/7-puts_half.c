#include "main.h"
/**
 * puts_half - function that prints half of a string
 *
 * @str: pointer to str
 */
void puts_half(char *str)
{
int l, i;
l = 0;
while (str[l] != '\0')
l++;
if (l % 2 == 0)
{
for (i = l / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
else
{
i = ((l - 1) / 2) + 1;
for (; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
}

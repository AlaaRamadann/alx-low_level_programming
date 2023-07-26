#include "main.h"
/**
 * puts2 - function prints every other character of a string
 *
 * @str: string will be print
 */
void puts2(char *str)
{
int l, i;
l = 0;
while (str[l] != '\0')
{
l++;
}
for (i = 0; i <= l - 1; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
}

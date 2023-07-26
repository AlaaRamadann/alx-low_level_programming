#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 *
 * @s: string want to reverse
 */
void print_rev(char *s)
{
int length, i;
length = 0;
while (s[length] != '\0')
{
length++;
}
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
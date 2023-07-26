#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: string which will be reversed
 */
void rev_string(char *s)
{
int i, x;
x =  sizeof(s[0]) - 1; 
for (i = 0; i <= x; i++)
_putchar(s[i]);
_putchar('\n');
for (i = x; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}

#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: string which will be reversed
 */
void rev_string(char *s)
{
int l, i;
l = 0;
while (s[l] != '\0')
{
_putchar(s[l]);	
l++;
}
_putchar('\n');
for (i = l - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}

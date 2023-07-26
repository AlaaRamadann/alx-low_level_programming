#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: string which will be reversed
 */
void rev_string(char *s)
{
int i;
for (i = 0; i <= sizeof(s[0]) - 1; i++)
_putchar(s[i]);
_putchar('\n');
for (i = sizeof(s[0]) - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}

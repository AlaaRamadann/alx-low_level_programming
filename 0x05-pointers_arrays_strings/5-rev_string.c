#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: string which will be reversed
 */
void rev_string(char *s)
{
int i, l, t;
l = 0;
while (s[l] != '\0')
{
l++;
}
for (i = 0; i < l / 2; i++)
{
t = s[i];
s[i] = s[l - i - 1];
s[l - i - 1] = t;
}
}

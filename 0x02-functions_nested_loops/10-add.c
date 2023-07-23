#include "main.h"
/**
 *add - function that adds two integers
 *@x: check for number
 *
 *@y: check for number
 *
 *Return: returns the result
 */
int add(int x, int y)
{
int a = x + y;
if (a <= 9)
_putchar(a + 48);
else
_putchar((a / 10) + 48);
_putchar((a % 10) + 48);
return (a);
}

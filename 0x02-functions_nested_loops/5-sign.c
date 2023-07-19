#include "main.h"
/**
 * print_sign -  function that prints the sign of a number
 *
 * @n: check for sign
 *
 * Return: Returns 1 if n is greater than zero
 * Returns 0 if n is zero
 * Returns -1 if n is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
}
else if (n == 0)
{
return (0);
_putchar(0);
}
else if (n < 0)
{
return (-1);
_putchar('-');
}
}

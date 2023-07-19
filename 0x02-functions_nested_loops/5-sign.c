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
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
return (0);
}

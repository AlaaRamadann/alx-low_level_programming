#include "main.h"
/**
 *  print_last_digit - function that prints the last digit of a number
 *
 *  @n: check for integer
 *
 *  Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
int x;
if (n < 0)
{
n = n * -1;
x = (n % 10) * -1;
}
else
x = n % 10;
_putchar(x + 48);
return (x);
}

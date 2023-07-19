#include "main.h"
/**
 *  print_last_digit - function that prints the last digit of a number
 *
 *  @int: check for integer
 *
 *  Return: Returns the value of the last digit
 */
int print_last_digit(int)
{
int n, x;
if (n < 0)
{
n = n * -1;
x = (n % 10) * -1;
}
else
x = n % 10;
return (x);
}

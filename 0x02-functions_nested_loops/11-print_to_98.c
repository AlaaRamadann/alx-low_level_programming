#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -  function that prints all natural numbers from n to 98
 *
 * @n: number start with
 *
 * Return: no return
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i < 98; i++)
printf("%d, ", i);
printf("98\n");
}
else if (n > 98)
{
for (i = n; i > 98; i--)
printf("%d, ", i);
printf("98\n");
}
else
printf("98\n");
}

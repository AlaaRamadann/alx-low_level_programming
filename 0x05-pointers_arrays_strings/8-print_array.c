#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 *
 * @a: pointer to array
 * @n: is the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n - 1; i++)
{
if (i != n - 1)
printf("%d, ", a[i]);
else
printf("%d\n", a[i]);
}
}

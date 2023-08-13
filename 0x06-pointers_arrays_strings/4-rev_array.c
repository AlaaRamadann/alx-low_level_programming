#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
int i;
if (n > 0)
{
for  (i = n - 1; i >= 0; i--)
{
_putchar(a[i]);
if (i != 0)
_putchar(",");
_putchar(" ");
}
}
}

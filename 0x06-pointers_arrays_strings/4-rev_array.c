#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
int i, j;
j = n - 1;
if (n > 0)
{
for (i = 0; i < j; i++, j--)
{
a[i] = a[j];
}
}
}
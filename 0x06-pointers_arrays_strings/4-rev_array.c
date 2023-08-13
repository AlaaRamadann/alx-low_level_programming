#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
int i, j, t;
j = n - 1;
if (n > 0)
{
for (i = 0; j >= 0; i++, j--)
{
t = ar[i];
ar[i] = ar[j];
ar[j] = t;
}
}
}

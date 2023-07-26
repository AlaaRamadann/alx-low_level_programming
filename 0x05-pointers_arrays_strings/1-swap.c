#include "main.h"
/**
 * swap_int - unction that swaps the values of two integers
 *
 * @a: 1st integer
 * @b: 2nd integer
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}

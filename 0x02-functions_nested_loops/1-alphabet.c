#include <stdio.h>
#include "main.h"
/**
* print_alphabet - utilizes _putchar function to print alphabet
*
*/
void print_alphabet(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
return (0);
}

#include "main.h"
/**
 * _puts - function that prints a string
 *
 * @str: check for string
 */
void _puts(char *str)
{
int null;
while (*str != '\0')
{
_putchar(*str);
}
_putchar('\n');
}

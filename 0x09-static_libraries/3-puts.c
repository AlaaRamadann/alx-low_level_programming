#include "main.h"
/**
 * _puts - function that prints a string
 *
 * @str: check for string
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}

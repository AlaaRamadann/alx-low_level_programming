#include "main.h"
/**
 * _strlen - unction that returns the length of a string
 *
 * @s: string which will return
 *
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

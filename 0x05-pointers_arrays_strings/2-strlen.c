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
int lenght = 0;
while (*s != '\0')
{
lenght++;
s++;
}
return (lenght);
}

#include "main.h"
/**
 * _islower - function checks for lowercase character.
 *
 * @c: checks input of function
 *
 * Return: Returns 1 if c is lowercase
 *  Returns 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

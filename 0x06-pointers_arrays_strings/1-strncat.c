#include "main.h"
/**
 * _strncat -  function that concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j, l;
l = 0;
for (i = 0; src[i] != '\0'; i++)
{
l++;
}
for (i = 0; dest[i] != '\0'; i++)
{
}
if (n >= l)
{
for (j = 0; src[j] != '\0'; i++, j++)
{
dest[i] = src[j];
}
}
for (j = 0; j <= n - 1; i++, j++)
{
dest[i] = src[j];
}
dest[i] = '\0';
}

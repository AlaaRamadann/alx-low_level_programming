#include "main.h"
/**
 * _strncpy -  function that concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;
for (j = 0; j <= n - 1 && src[j] != '\0'; j++)
{
dest[j] = src[j];
}
dest[j] = '\0';
return (dest);
}

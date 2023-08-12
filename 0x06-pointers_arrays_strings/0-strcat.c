#include "main.h"
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;
j = 0;
for (dest[i] = '\0'; src[j] != '\0'; i++)
{
dest[i] = src[j];
j++;
}
dest[i] = '\0';
return (dest);
}

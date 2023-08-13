#include "main.h"
/**
 * _strcmp - function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: return the difference
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0;; i++)
{
if (s[i] == '\0' && s1[i] == s2[i])
{
return (0);
break;
}
if (s1[i] == s2[i])
i++;
if (s1[i] > s2[i])
{
return (s1[i] - s2[i]);
break;
}
else if (s1[i] < s2[i])
{
return (s1[i] - s2[i]);
break;
}
}
}

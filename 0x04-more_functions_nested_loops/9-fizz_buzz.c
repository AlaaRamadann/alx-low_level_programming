#include <stdio.h>
/**
* main - Entry point
*
* Description: A c program that prints the numbers from 1 to 100
*
* Return: Always 0 (success)
*/
int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if ((x % 3 == 0) && (x % 5 == 0))
printf("FizzBuzz");
else if (x % 3 == 0)
printf("Fizz");
else if (x % 5 == 0)
printf("Buzz");
else
printf("%d", x);
printf(" ");
}
return (0);
}
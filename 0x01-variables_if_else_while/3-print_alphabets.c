/**
* main - Entry point
*
* Description: A c program that prints the alphabet with putchar function
*
* Return: Always 0 (success)
*/
int main(void)
{
int v, x;
for (v = 'a'; v <= 'z'; v++)
putchar(v);
for (x = 'A'; x <= 'Z'; x++)
putchar(x);
putchar('\n');
return (0);
}

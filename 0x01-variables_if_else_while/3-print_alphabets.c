#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
char x;
char y;
for (x = 'a'; x <= 'z'; x++)
putchar(x);
for (y = 'A'; y <= 'Z'; y++)
putchar(y);
putchar('\n');
return (0);
}

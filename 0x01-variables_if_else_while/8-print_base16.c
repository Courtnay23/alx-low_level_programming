#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
int x;
char y;
for (x = '0'; x <= '9'; x++)
putchar(x);
for (y = 'a'; y <= 'f'; y++)
putchar(y);
putchar('\n');
return (0);
}

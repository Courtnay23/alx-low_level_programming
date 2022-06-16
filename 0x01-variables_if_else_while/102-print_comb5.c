#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
int x, y;
for (x = '0'; x <= '98'; x++)
{
for (y = x + 1; y <= '98'; y++)
{
putchar((x / 10) + '0');
putchar((x % 10) + '0');
putchar(' ');
putchar((q / 10) + '0');
puthcar((q % 10) + '0');
if (x == '98' && y == '99')
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

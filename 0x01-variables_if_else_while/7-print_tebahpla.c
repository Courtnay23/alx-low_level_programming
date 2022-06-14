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
for (x = 'z'; x >= 'a'; x--)
putchar(x);
putchar('\n');
return (0);
}

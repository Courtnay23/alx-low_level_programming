#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
char x, e, q;
e = 'e';
q = 'q';
for (x = 'a'; x <= 'z'; x++)
{
if (x != e && x != q)	
putchar(x);
}
putchar('\n');
return (0);
}

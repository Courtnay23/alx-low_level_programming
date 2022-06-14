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
for (int x = 'a' ; x <= 'Z'; x++)
{ x = tolower(x);
putchar(x);
}	
return (0);
}

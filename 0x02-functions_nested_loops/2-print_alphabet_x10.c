#include "main.h"

/**
 * print_alphabet_x10 - function prints 10 copies of alphabet
 *
 * Return = 0 (SUCCESS)
 */
void print_alphabet_x10(void)
{
char c, i;
for (i = 0; 1 <= 9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{ 
_putchar(c);
}
_putchar('\n');
}
}

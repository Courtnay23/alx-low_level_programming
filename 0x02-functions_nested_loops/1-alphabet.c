#include "main.h"
/**
 * print_alphabet - function to print alphabet
 * Description: It prints the alphabet in lowercase, followed by a new line.
 * Return: nothing
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}

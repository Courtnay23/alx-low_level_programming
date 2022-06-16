#include <unistd.h>
#include "holberton.h"
/**
 * main - Check description
 * Description: It prints the alphabet in lowercase, followed by a new line.
 * Return: 0 (SUCCESS)
 */
int print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
_putchar(x);
_putchar('\n');
return (0);
}

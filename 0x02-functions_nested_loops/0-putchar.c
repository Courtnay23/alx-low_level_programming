#include <unistd.h>
#include "holberton.h"
/**
 * main - Check description
 * Description: It prints the word Holberton, followed by a new line.
 * Return: 0 (SUCCESS)
 */
int main(void)
{
char word[9]= "Holberton";
int x;
for (x = 0; x < 9; x++)
_putchar(word[x]);
_putchar('\n');
return (0);
}

#include "main.h"

/**
 * _isalpha - function to check if c is an upper or lowercase letter
 *@c: is the int that we will use for the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}

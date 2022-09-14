#include "main.h"

/**
 * _isalpha = checks if int c is a lower or upper case letter
 *@c: is the integer being used for the question
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

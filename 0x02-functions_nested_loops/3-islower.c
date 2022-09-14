#include "main.h"

/**
 * _islower = checks for lowercase char
 *@c is the integer 
 * Return = 0 (SUCCESS)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}

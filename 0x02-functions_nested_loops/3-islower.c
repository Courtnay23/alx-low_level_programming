#include "main.h"

/**
 * _islower - function to check for lowercase character
 *@c: is the integer 
 * Return : 1 (SUCCESS for _islower)
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

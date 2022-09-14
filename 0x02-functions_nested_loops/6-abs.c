#include "main.h"
#include "stdio.h"

/**
 * _abs = computes the absolute value of an integer
 *
 * Return = 0 (SUCCESS)
 */
int _abs(int c)
{
if (c > 0 || c == 0)
{
return(c);
}
else
return(c * -1);
}

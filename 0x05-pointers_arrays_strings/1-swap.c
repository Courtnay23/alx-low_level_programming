#include "main.h"
/**
 * swap_int - swaps to integer values
 * @a: first integer
 * @b: second integer
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}

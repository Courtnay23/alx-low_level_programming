#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * in order separated by comma and a space.
 *@n: Number which is taken as input
 */
void print_to_98(int n)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}

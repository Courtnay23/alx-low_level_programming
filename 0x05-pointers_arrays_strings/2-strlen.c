#include "main.h"
/**
 *_strlen - returns the lenth of a string
 *@s: string
 *Return: returns the length of integer;
 */
int _strlen(char *s)
{
int len = 0;
while (*(s + len) != '\0')
len++;
return (len);
}

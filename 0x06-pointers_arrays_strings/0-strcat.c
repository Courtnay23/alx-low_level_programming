#include "main.h"
/**
 *_strcat - concatentates the string pointed to be @src,
 *to the end of the string pointed to @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *Return: returns the pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}

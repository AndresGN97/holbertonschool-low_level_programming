#include "main.h"
#include <stdio.h>

/**
 *_strcat - Concatenates two strings.
 *@dest: a string.
 *@src: Source string.
 *Return: A pointer.
 */
char *_strcat(char *dest, char *src)
{
int n = 0, i;
while (dest[n])
{
n++;
}
for (i = 0; src[i] != 0; i++)
{
dest[n] = src[i];
n++;
}
dest[n] = '\0';
return (dest);
}

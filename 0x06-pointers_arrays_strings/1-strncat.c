#include "main.h"

/**
 *_strncat - COncatenates two strings.
 *@dest: Value destination.
 *@src: Value source.
 *@n: An integer.
 *Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
int a = 0, j = 0;

while (dest[a])
{
a++;
}
while (j < a && src[j])
{
dest[a] = src[j];
a++;
j++;
}

dest[a + n + 1] = '\0';

return (dest);
}

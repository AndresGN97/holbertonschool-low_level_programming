#include "main.h"

/**
 *rev_string - Print a string in reverse.
 *@s: Pointer to an int.
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i = 0, j = 0;
char str[50];

while (*(s + i))
{
*(str + i) = *(s + i);
i++;
}
i = i - 1;
while (i >= 0)
{
*(s + i) = *(str + j);
j++;
i--;
}
}

#include "main.h"

/**
 *print_rev - prints a string.
 *
 *@s: Char.
 * Return: Always 0.
 */
void print_rev(char *s)
{
int a = 0;

while (*(s + a))
a++;
a = a - 1;
while (a >= 0)
{
_putchar(*(s + a));
a--;
}
_putchar('\n');
}

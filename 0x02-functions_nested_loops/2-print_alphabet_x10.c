#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet ten times, each time in a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)

{
int n, i;
for (i = 1; i <= 10; i++)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
}
}


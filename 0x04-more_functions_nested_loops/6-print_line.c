#include "main.h"

/**
 * print_line - Print a continous line.
 *@n: Character to be check.
 * Return: Always 0.
 */
void print_line(int n)
{

int l;
if (n > 0)
{
for (l = 0; l < n; l++)
_putchar('_');
}
_putchar('\n');
}

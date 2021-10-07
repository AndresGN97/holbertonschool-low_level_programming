#include "main.h"

/**
 * print_triangle -print a triangle by printing #.
 *@size: Character to be check.
 * Return: Always 0.
 */
void print_triangle(int size)
{
int a, b;

if (size <= 0)
_putchar('\n');
for (a = 1; a <= size; a++)
{
for (b = 1; b <= size; b++)
{
if (b <= (size - a))
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}

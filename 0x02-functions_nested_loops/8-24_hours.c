#include "main.h"

/**
 * jack_bauer - prints the hours and minutes
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
int h, m, n, p, q, r;
for (h = 0; h <= 23; h++)
{
n = (h / 10);
q = (h % 10);
for (m = 0; m <= 59; m++)
{
p = (m / 10);
r = (m % 10);
_putchar ('0' + n);
_putchar ('0' + q);
_putchar (':');
_putchar ('0' + p);
_putchar ('0' + r);
_putchar ('\n');
}
}
}

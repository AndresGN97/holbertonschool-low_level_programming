#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 *@n: integer to check
 * Return: 1 if is > than 0
 *0 if the number is zero, and -1 if the number is less than zero
 */
int print_sign(int n)

{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar ('-');
return (-1);
}
else
{
_putchar ('0');
return (0);
}
}

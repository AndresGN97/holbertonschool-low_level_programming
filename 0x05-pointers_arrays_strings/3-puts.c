#include "main.h"

/**
 *_puts - Print a string.
 *@str: Pointer to an int.
 * Return: Always 0.
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar (*str);
str++;
}
_putchar ('\n');
}

#include "main.h"

/**
 * _isdigit - check if a character is a digit.
 *@c: Character to be check.
 * Return: Always 0.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}

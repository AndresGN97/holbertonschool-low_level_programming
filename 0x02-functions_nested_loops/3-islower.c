#include "main.h"

/**
 * _islower - Checks if a character is in lowercase.
 * @c : character to check
 *
 * Return: 1 if character is lowercase, 0 if it is not.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

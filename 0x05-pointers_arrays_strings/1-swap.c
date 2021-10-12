#include "main.h"

/**
 * swap_int - Swap 2 integers using a pointer.
 * @a: Character to be check.
 * @b: Character to be check.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}

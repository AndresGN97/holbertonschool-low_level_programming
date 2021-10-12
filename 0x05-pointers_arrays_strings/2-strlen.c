#include "main.h"

/**
 * _strlen - The lenght of a string.
 *@c: A pointer in char .
 * Return: Always 0.
 */
int _strlen(char *s)
{
  int a;
  for (a = 0; *s != '\0'; a++)
    s++;
  return a;
}

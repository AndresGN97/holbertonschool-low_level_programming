#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
  int digit;
  char ch;

  for (digit = 0; digit < 10; digit++)
    putchar((digit % 10) + '0');

  for (ch = 'a'; ch <= 'f'; ch++)
    putchar(ch);

  putchar('\n');

  return (0);
}  

#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, except q and e
 *
 * Return: Always 0.
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if(ch != 'e' && ch != 'q')
putchar(c);
}
putchar('\n');
return (0);
}

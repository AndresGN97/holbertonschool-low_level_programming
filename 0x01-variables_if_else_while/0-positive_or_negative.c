/**
*0x01-variables_if_else_while
*
*main: determine if a number is positive or negative
*
*Return 0
*made by: Andrés Guevara
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main: determine if a number is possitive or negative
*
* Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
return (0);
}

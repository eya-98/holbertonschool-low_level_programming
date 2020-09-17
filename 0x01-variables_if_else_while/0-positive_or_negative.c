#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - prints whether a number is positive or negative
*
*Description: prints a message whether the number is positive or negative
*
*Return: returns 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}

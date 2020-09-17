#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - prints whether a number is positive or negative
*
*Description: prints a message whether the number is positive or negative
*
*Return: returns 0
*/
int main(void)
{
int n, a;
srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
if (a > 5)
{
printf("Last digit of %d is %f and is and is greater than 5 /n", n, a);
}
else if (a == 0)
{
printf("Last digit of %d is %f and is and is greater than 5 /n", n, a);
}
else
{
printf("Last digit of %d is %f and is and is less than 5 /n", n, a);
}
return (0);
}

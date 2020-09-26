#include <stdio.h>
/**
 * main - inds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
  unsigned long int n;
  int i, max;
n = 612852475143;
while ((n % 2) == 0)
{
max = 2;
n = n / 2;
}
for (i = 2; n; i++)
{
while ((n % i) == 0)
{
n = n / i;
max = i;
}
}
printf("%d\n", max);
return(0);
}

#include <stdio.h>
/**
 * main - inds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int n;
int i, max, j;
n = 612852475143;
for (i = 2; n; i++)
{
while ((n % i) == 0)
{
n = n / i;
max = 1;
for (j = 2; i / 2; i++)
if (i % j == 0)
max = 0;
}
}
if (max == 1)
printf("%d\n", max);
return (0);
}

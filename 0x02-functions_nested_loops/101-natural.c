#include <stdio.h>
/**
 *natural - prints the sum of all the multiples of 3 or 5 below 1024
 *Return: the sum
 */
void natural()
{
int i, j, sum, num, k;
i = 1;
j = 1;
sum = 0;
while (i < 1024)
{
i = i * 3;
sum = sum + i;
}
while (j < 1024)
{
j = j * 5;
sum = sum + j;
}
k = sum;
num = 1;
while (k >= 10)
{
num = num * 10;
k = k / 10;
}
while (sum)
{
_putchar('0' + sum / num);
sum = sum - (sum / num);
}
_putchar('0' + sum % 10);
_putchar('\n');
}

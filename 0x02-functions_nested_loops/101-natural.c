#include <stdio.h>
/**
 *natural - prints the sum of all the multiples of 3 or 5 below 1024
 *Return: the sum
 */
int main()
{
int i, j, sum;
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
if (j % 3 != 0)
sum = sum + j;
}
printf("%d\n", sum);
return (0);
}

#include <stdio.h>
/**
 *main - prints the sum of all the multiples of 3 or 5 below 1024
 *Return: the sum
 */
int main(void)
{
int i, j, sum;
i = 0;
j = 0;
sum = 0;
while (i < 1021)
{
i = i + 3;
sum = sum + i;
}
while (j < 1019)
{
j = j + 5;
if (!(j % 3 == 0))
sum = sum + j;
}
printf("%d\n", sum);
return (0);
}

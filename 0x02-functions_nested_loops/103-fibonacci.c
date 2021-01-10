#include"stdio.h"
/**
 *main - sum the even numbers of a fibonnaci sequence
 *Return: the sum
 */
int main(void)
{
unsigned long int i, j, n, sum;
i = 1;
j = 2;
n = 0;
sum = 0;
while (i <= 4000000 and j <= 4000000)
{
i = i + j;
j = i + j;
if (i % 2 != 0)
sum = sum + i;
if (j % 2 != 0)
sum = sum + j;
n++;
}
printf("%lu\n", sum);
return (0);
}

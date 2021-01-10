#include"stdio.h"
/**
 *main - sum the even numbers of a fibonnaci sequence 
 *Return: the sum
 */
int main(void)
{
long int i, j, n, sum;
i = 1;
j = 2;
n = 0;
sum = 0;
while (n < 2000000)
{
i = i + j;
j = i + j;
if (i % 2 != 0)
sum = sum + i;
if (j % 2 != 0)
sum = sum + j;
n++;
}
printf("%ld\n", sum);
return (0);
}

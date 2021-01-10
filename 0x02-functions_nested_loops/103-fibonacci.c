#include"stdio.h"
/**
 *main - sum the even numbers of a fibonnaci sequence
 *Return: the sum
 */
int main(void)
{
unsigned long int i, j, sum;
i = 0;
j = 1;
sum = 0;
while (i < 4000000 && j < 4000000)
{
i = i + j;
j = i + j;
if (i % 2 == 0)
sum = sum + i;
if (j % 2 == 0)
sum = sum + j;
}
printf("%lu\n", sum);
return (0);
}

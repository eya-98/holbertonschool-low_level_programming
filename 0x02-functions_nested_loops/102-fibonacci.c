#include"stdio.h"
/**
 *main - print the 50 fibonacci number starting with 1 and 2
 *Return: Null
 */
int main(void)
{
long int i, j, n;
i = 1;
j = 2;
n = 0;
while (n < 24)
{
printf("%ld, ", i);
printf("%ld, ", j);
i = i + j;
j = i + j;
n++;
}
printf("%ld, ", i);
printf("%ld", j);
printf("\n");
return (0);
}

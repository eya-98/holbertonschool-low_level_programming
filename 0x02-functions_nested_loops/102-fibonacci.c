#include"stdio.h"
/**
 *main - print the 50 fibonacci number starting with 1 and 2
 *Return: Null
 */
int main(void)
{
int i, j, n;
i = 1;
j = 2;
n = 2;
while (n <= 51)
{
printf("%d, ", i);
printf("%d, ", j);
i = i + j;
j = i + j;
n++;
}
printf("\n");
return (0);
}

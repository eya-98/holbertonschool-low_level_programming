#include<stdio.h>
/**
 * main - main function
 *
 * Description: prints numbers from 01 to 89
 *
 * Return: 0
 *
 */
int main(void)
{
int d;
int j;
for (d = 0 ; d <= 9; d++)
{
for (j = d + 1; j < 9; j++)
{
putchar(d);
putchar(j);
if (d != 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

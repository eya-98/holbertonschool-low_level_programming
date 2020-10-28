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
int d, j;
for (d = 0; d <= 98; d++)
{
for (j = 1; j <= 99; j++)
{
putchar('0' + d / 10);
putchar('0' + d % 10);
putchar(' ');
putchar('0' + j / 10);
putchar('0' + j % 10);
if ((d != 98) && (j != 99))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

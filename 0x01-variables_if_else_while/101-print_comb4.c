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
int d, j, m;
for (d = '0' ; d <= '9'; d++)
{
for (j = d + 1; j <= '9'; j++)
{
for (m = j + 1; m <= '9'; m++)
{
putchar(d);
putchar(j);
putchar(m);
if (d != '8')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

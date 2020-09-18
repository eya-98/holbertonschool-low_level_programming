#include<stdio.h>
/**
 * main - main function
 *
 * Description: prints numbers from 00 to 99
 *
 * Return: 0
 *
 */
int main(void)
{
int d;
int j;
for (d = 0 ; d <= 5 ; d++)
{
for (j = d + 1; j < 58; j++)
{
putchar(d);
putchar(j);
if (d != 56)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

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
int d, j, m, n;
for (d = '0' ; d <= '9'; d++)
{
for (j = '0' ; j <= '8'; j++)
{
for (m = '0'; m <= '9'; m++)
{
for (n = '1'; n <= '9'; n++)
{
putchar(d);
putchar(j);
putchar (' ');
putchar(m);
putchar (n);
if ((d != '9') || (j != '8') || (m != '9') || (n != '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

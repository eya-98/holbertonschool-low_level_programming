#include "holberton.h"
/**
 * print_number - print numbers
 * @n : integer
 * Return: Always 0.
 */
void print_number(int n)
{
unsigned int m, i, j;
if (n < 0)
{
_putchar('-');
n = -n;
}
j = 1;
if (n < 10)
_putchar('0' + n);
else
{
i = n;
m = 0;
while (i >= 10)
{
j = j * 10;
i = i / 10;
m++;
}
while (m != 0)
{
_putchar('0' + n / j);
n = n - (n / j) *j;
j = j / 10;
m--;
}
_putchar('0' + n % 10);
}
}

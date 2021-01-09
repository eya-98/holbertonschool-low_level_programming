#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - check the code for Holberton School students.
 * @n : int
 * Return: Always 0.
 */
void print_times_table(int n)
{
int i, j;
if ((n >= 0) && (n <= 15))
{
for (i = 0; i <= n ; i++)
{
for (j = 0; j <= n; j++)
{
if (i * j < 10)
_putchar('0' + i * j);
else if (i * j < 100)
{
_putchar('0' + (i * j) / 10);
_putchar('0' + (i * j) % 10);
}
else if (i * j < 1000)
{
_putchar('0' + (i * j) / 100);
_putchar('0' + (((i * j) - ((i * j) / 100) * 100)) / 10);
_putchar('0' + (i * j) % 10);
}
if (j != n)
{
_putchar(',');
_putchar(' ');
if (i * (j + 1) < 100)
{
_putchar(' ');
if (i * (j + 1) < 10)
_putchar(' ');
}
}
else
_putchar('\n');
}
}
}
}


#include "holberton.h"
/**
 * times_table - time table
 *
 * Return: Always 0.
 */
void times_table(void)
{
int i, j, c, d, e;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
c = i * j;
d = c / 10;
e = c % 10;
if (j == 0)
_putchar('0');
else if (c < 10)
{
_putchar(' ');
_putchar('0' + e);
}
else
{
_putchar('0' + d);
_putchar('0' + e);
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
else
_putchar('\n');
}
}
}

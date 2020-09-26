#include "holberton.h"
/**
 * print_number - print numbers
 * @n : integer
 * Return: Always 0.
 */
void print_number(int n)
{
unsigned int i, k;
int l, j, f;
i = n;
if (n < 0)
{
_putchar('-');
i = -i;
}
k = i / 10;
j = 1;
f = i % 10;
if (i >= 10)
{
while (k >= 10)
{
f = (f * 10) + (k % 10);
k = k / 10;
j = j + 1;
}
f = (f * 10) + (k % 10);
for (l = 1 ; l <= j; l++)
{
_putchar(f % 10 + '0');
f = f / 10;
}
_putchar (i % 10 + '0');
}
else
{
_putchar(i % 10 + '0');
}
_putchar('\n');
}

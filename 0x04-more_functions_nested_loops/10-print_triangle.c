#include "holberton.h"
/**
 * print_triangle - print triangle
 * @size : int
 * Return: Always 0.
 */
void print_triangle(int size)
{
int k, i, j;
if (size <= 0)
_putchar('\n');
else
{
for (k = size; k >= 1; k--)
{
for (i = 0; i < k - 1; i++)
{
_putchar(' ');
}
for (j = 0; j < size - i ; j++)
{
_putchar('#');
}
_putchar('\n');
}
return;
}
}

#include "holberton.h"
/**
 * print_line - check the code for Holberton School students.
 * @n : integer
 * Return: Always 0.
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0 ; i <= n ; i++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}

#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - check the code for Holberton School students.
 * @n : int
 * Return: Always 0.
 */
void print_times_table(int n)
{
int i, j, l;
if ((n > 0) && (n < 15))
{
for (i = 0; i <= n ; i++)
{
for (j = 0; j <= n; j++)
{
l = i * j;
if (j != 0)
{
if (l < 10)
printf(",   %d", l);
else if (l < 100)
printf(",  %d", l);
else
printf(", %d", l);
}
else
printf("%d", l);
}
printf("\n");
}
}
}

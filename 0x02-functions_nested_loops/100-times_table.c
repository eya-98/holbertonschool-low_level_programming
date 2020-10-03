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
for (j = 0; j < n; j++)
{
if (i * j < 10)
printf("%d,   ", i * j);
else if (i * j < 100)
printf("%d,  ", i * j);
else 
printf("%d, ", i * j);
}
while (j == n)
{
printf("%d\n", i * j);
j++;
}
}
}
}

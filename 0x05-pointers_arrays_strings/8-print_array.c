#include "holberton.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array
 * @a : array of int;
 * @n : number of elements
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i;
if (n <= 0)
return;
if (n == 1)
{
printf("%d\n", a[0]);
return;
}
for (i = 0; i < n - 1; i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[i]);
}

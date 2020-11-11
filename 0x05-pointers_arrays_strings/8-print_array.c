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
for (i = 0; i <= n - 1; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}

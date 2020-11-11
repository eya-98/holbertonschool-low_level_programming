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
int i = 0;
while (i < n - 1)
{
printf("%d, ", a[i]);
i++;
}
printf("%d\n", a[i]);
}

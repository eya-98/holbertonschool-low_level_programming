#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *array_range - creates an array of integers
 * @min : min
 * @max : max
 * Return: an int
 */
int *array_range(int min, int max)
{
int i, k = 0;
int *s;
if (min > max)
return (0);
s = malloc(sizeof(int) * (max - min + 1));
if (s == NULL)
return (0);
for (i = min; i <= max; i++)
{
s[k] = i;
k++;
}
return (s);
}

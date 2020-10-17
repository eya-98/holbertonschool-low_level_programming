#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_grid -  returns a pointer to a 2 dimensional array of int
 * @width : width of the grid
 * @height: height of the grid
 * Return: a pointer.
 */
int **alloc_grid(int width, int height)
{
  int i, j;
int **s;
if (height <= 0 || width <= 0)
{
return (0);
}
s = malloc(sizeof(int) * height);
if (s == 0)
return (0);
for (i = 0; i < height; i++)
{
s[i] = malloc(width * sizeof(int));
if (s[i] == 0)
return (0);
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
s[i][j] = 0;
}
return (s);
}

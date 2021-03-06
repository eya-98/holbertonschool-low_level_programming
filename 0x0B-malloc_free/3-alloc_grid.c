#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid -  returns a pointer to a 2 dimensional array of int
 * @width : width of the grid
 * @height: height of the grid
 * Return: a pointer.
 */
int **alloc_grid(int width, int height)
{
int i, j, n;
int **s;
if ((width <= 0) || (height <= 0))
{
return (0);
}
s =  malloc(height * sizeof(int *));
if (s == 0)
{
return (0);
}
for (i = 0; i < height; i++)
{
s[i] = malloc(width * sizeof(int));
if (s[i] == 0)
{
for (j = 0; j < i; j++)
{
free(s[j]);
}
free(s);
return (0);
}
for (n = 0; n < width; n++)
{
s[i][n] = 0;
}
}
return (s);
}

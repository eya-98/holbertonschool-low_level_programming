#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - a function that searches for an integer.
 *@array: array of int
 *@size: integer
 *@cmp: pointer to a function
 *Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
else if (array != 0 && cmp != 0)
{
for (i = 0; i < size ; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}

#include "search_algos.h"
/**
*binary_search - searches for a value using the Binary search algorithm
*@array: the array in which we will look fro the element
*@value: the element
*@size: the length of the array
*Return: index
*/
int binary_search(int *array, size_t size, int value)
{
int i = 0, left = 0, right = size - 1, middle;
if (array == NULL)
return (-1);
while (left <= right)
{
printf("Searching in array: ");
for (i = left; i < right; i++)
{
printf("%i, ", array[i]);
}
printf("%i\n", array[right]);
middle = (left + right) / 2;
if (array[middle] < value)
{
left = middle + 1;
}
else if (array[middle] > value)
{
right = middle - 1;
}
else
{
return (middle);
}
}
return (-1);
}

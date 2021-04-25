#include "search_algos.h"
/**
*linear_search: searches for a value  using the Linear search algorithm
*@array: the array in which we will look fro the element
*@value: the element 
*Return: index
*/
int linear_search(int *array, size_t size, int value)
{
unsigned int i;
for (i = 0; i < size; i++)
{
printf("Value checked array[%u] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return i;
}
}
return (-1);
}
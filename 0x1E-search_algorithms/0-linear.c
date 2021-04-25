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
unsigned int j = 0;
for (i = 0; i < size; i++)
{
if (array[i] == value)
{
j += 1;
break;
}
}
if (j == 0)
return (-1);
else
return i;
}
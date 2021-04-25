#include "search_algos.h"
/**
*binary_search:  searches for a value using the Binary search algorithm
*@array: the array in which we will look fro the element
*@value: the element 
*Return: index
*/
int binary_search(int *array, size_t size, int value)
{
unsigned int i=0;
while(size >= 2)
{
if (array[i] == value)
{
    return i;
}
else
    i++;
    size = size / 2;
}
return (-1);
}
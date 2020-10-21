#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function
 * @array : 
 * @size : size_t
 * @action : pointer 
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (size != 0 && array != 0 && action != 0)
for (i = 0; i < size ; i++)
action(array[i]);
}

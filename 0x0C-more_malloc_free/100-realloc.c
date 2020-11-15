#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr : pointer to the memory previously allocated
 * @old_size : is the size, in bytes, of the allocated space for ptr
 * @new_size :is the new size, in bytes of the new memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
ptr = malloc(new_size);
if (ptr == NULL)
return (0);
}
else
{
if (new_size == 0)
{
free(ptr);
return (0);
}
if (new_size > old_size)
{
free(ptr);
ptr = malloc(new_size);
if (ptr == NULL)
return (0);
}
}
return (ptr);
}

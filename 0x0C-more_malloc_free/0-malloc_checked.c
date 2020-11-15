#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b : insigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
char *d;
d = malloc(sizeof(char) * b);
if (d == NULL)
exit(98);
return (d);
}

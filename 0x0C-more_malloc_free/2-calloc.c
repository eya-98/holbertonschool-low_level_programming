#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *s;
if ((nmemb == 0) || (size == 0))
return (0);
s = malloc(sizeof(char) * nmemb * size);
if (s == NULL)
return (0);
 for (i = 0; i < (nmemb * size); i++)
{
s[i] = 0;
}
return (s);
}

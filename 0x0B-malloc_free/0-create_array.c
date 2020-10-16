#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 **create_array - creates an array of chars
 * @c : string
 * @size: the size of the memory to print
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;
if (size == 0)
return (0);
s = malloc(sizeof(char) * size);
if (s == 0)
{
return (0);
}
for (i = 0; i <= size; i++)
{
s[i] = c;
}
s[size + 1] = '\0';
return (s);
}

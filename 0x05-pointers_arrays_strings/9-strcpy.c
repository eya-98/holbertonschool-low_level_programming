B#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - a function that copies the string
 * @dest : destination
 * @src : source
 * Return: string "dest".
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

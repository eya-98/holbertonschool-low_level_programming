#include "holberton.h"
/**
 * *_memcpy - copies memory area.
 * @dest: destination var
 * @src: source var
 * @n : unsigned int n
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

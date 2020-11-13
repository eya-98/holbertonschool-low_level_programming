#include "holberton.h"
/**
 * *_strncat - concatenate n bytes of two string
 * @dest : destination
 * @src : source
 * @n : number of bytes
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j, k;
for (j = 0; src[j] != '\0'; j++)
{
}
for (k = 0; dest[k] != '\0'; k++)
{
}
if (n <= j)
{
for (i = 0; i < n; i++)
{
dest[k + i] = src[i];
}
}
if (n > j)
{
for (i = 0; i < j; i++)
{
dest[k + i] = src[i];
}
}
if (n > 0)
{
dest[k + i] = '\0';
}
return (dest);
}

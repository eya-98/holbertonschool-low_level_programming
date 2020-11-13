#include "holberton.h"
/**
 * *_strncat - concatenate n bytes of two string
 * @dest : destination
 * @src : source
 * @n : number of bytes
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j, k;
for (j = 0; src[j] != '\0'; j++)
{
}
if (n > j)
return (0);
for (k = 0; dest[k] != '\0'; k++)
{
}
for (i = 0; i < n; i++)
{
dest[k + i] = src[i];
}
dest[k + i] = '\0';
return (dest);
}

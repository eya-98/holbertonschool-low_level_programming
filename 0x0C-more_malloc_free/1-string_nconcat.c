#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings.
 * @s1 : string
 * @s2 : string
 * @n : number of bytes
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int m, i, j, l;
if (s1 == NULL)
i = 0;
else
{
for (i = 0; s1[i]; i++)
{
}
}
if (s2 == NULL)
j = 0;
else
{
for (j = 0; s2[j]; j++)
{
}
}
if (j > n)
j = n;
s = malloc(sizeof(char) * (i + j + 1));
if (s == NULL)
return (NULL);
for (l = 0; l < i; l++)
s[l] = s1[l];
for (m = 0; m < j; m++)
s[m + l] = s2[m];
s[l + m] = '\0';
return (s);
}

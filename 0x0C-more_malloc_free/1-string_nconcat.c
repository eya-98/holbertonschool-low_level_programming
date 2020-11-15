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
unsigned int i, j, l;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0; s2[j] != '\0'; j++)
{
}
if (j > n)
j = n;
s = malloc(sizeof(char) * (i + j + 1));
if (s == NULL)
return (0);
for (l = 0; l < i; l++)
{
s[l] = s1[l];
}
for (j = 0; j < n; j++)
{
s[l + 1] = s2[j];
l++;
}
s[l + 1] = '\0';
return (s);
}

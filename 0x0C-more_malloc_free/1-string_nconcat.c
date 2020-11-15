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
unsigned int i, j;
for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0; s2[j] != '\0'; j++)
{
}
if (n == 0)
{
return (s1);
}
if (n < j)
{
s = malloc(sizeof(char) * (i + j - 1));
if (s == NULL)
return (0);
}
if (n >= j)
{
s = malloc(sizeof(char) * (i + n - 1));
if (s == NULL)
return (0);
}
for (i = 0; s1[i] != '\0'; i++)
{
s[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
s[i] = s2[j];
i++;
}
s[i] = '\0';
return (s);
}

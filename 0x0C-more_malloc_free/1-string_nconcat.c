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
if (n > j)
{
s = malloc(sizeof(char) * (i + j + 1));
if (s == NULL)
return (0);
n = j;
}
if (n <= j)
{
s = malloc(sizeof(char) * (i + n + 1));
if (s == NULL)
return (0);
}
for (i = 0; s1[i] != '\0'; i++)
{
s[i] = s1[i];
}
if (n == 0)
{
s[i] = '\0';
return (s);
}
for (j = 0; j < n; j++)
{
s[i] = s2[j];
i++;
}
s[i] = '\0';
return (s);
}

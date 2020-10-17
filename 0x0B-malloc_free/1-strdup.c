#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - check the code for Holberton School students.
 * @str : char
 * Return: Always 0.
 */
char *_strdup(char *str)
{
char *s;
int i, j;
if (str == 0)
return (0);
for (i = 0; str[i] >= '\0'; i++)
{
}
i = i + 1;
s = malloc(sizeof(char) * i);
if (s == 0)
{
return (0);
}
for (j = 0; j < i; j++)
{
s[j] = str[j];
}
s[j + 1] = '\0';
return (s);
}

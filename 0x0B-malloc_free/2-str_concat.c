#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat -  a function that concatenates two strings.
 * @s1 : string
 * @s2 : string
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
int i, j, k;
 char *s3;
for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0 ; s2[j] != '\0'; j++)
{
s1[i+1] = s2[j];
i++;
}
s1[i + 1] = '\0';
s3 = malloc(sizeof(char) * (i + j + 1));
if (s3 == 0)
return (0);
else
{
if (s1[0] == '\0')
s3 = '\0';
else
{
for (k = 0; s1[k] != '\0'; i++)
{
s3[k] = s1[k];
}
s3[k + 1] = '\0';
}
return (s3);
}
return (0);
}


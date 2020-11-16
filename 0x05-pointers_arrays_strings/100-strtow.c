#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **strtow - a function that splits a string into words.
 * @str : string
 * Return: char;
 */
char **strtow(char *str)
{
int t, n, i, k, j;
char **tabl;
if (str == NULL || str == '\0')
return (0);
for (t = 0; str[t] != '\0'; t++)
{
}
tabl = malloc(sizeof(char) * (t + 1));
if (tabl == NULL)
return (0);
n = 0;
for (i = 0; str[i] != '\0'; i++)
{
k = 0;
j = i;
while (str[j] != ' ')
{
k++;
j++;
}
tabl[n] = malloc(sizeof(char) * k);
if (tabl[n] == NULL)
{
free(tabl);
return (0);
}
while (i <= j)
{
tabl[n][i] = str[i];
i++;
}
i++;
n++;
}
return (tabl);
}

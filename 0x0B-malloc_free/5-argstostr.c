#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments
 * @ac : number of elements
 * @av : element's strings
 * Return: string.
 */
char *argstostr(int ac, char **av)
{
int j, i, l, k;
char *s;
if (ac == 0)
return (0);
if (av == NULL)
return (0);
k = 0;
for (i = 0; av[i] != '\0'; i++)
{
j = 0;
while (av[i][j] != '\0')
{
j++;
k++;
}
k++;
}
s = malloc(sizeof(char) * (k + 1));
if (s == NULL)
return (0);
l = 0;
for (i = 0; i < ac; i++)
{
k = 0;
while (av[i][k] != '\0')
{
s[l] = av[i][k];
k++;
l++;
}
s[l] = '\n';
l++;
}
s[l] = '\0';
return (s);
}

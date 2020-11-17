#include "holberton.h"
#include <stdlib.h>
/**
 * cnt - counts the number of words in a string
 * @string: string to count
 *
 * Return: int
 */
int cnt(char *string)
{
int i, n = 0;
for (i = 0; string[i]; i++)
{
if (string[i] == ' ' && ((string[i + 1] != ' ') && (string[i + 1] != '\0')))
n++;
else if (i == 0)
n++;
}
n++;
return (n);
}
/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: char
 */
char **strtow(char *str)
{
int i = 0, j, k, l, n = 0, c = 0;
char **string;
if (str == NULL || *str == '\0')
return (NULL);
n = cnt(str);
if (n == 1)
return (NULL);
string = malloc(n * sizeof(char *));
if (string == NULL)
return (NULL);
string[n - 1] = NULL;
while (str[i])
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
{
}
j++;
string[c] = malloc(j * sizeof(char));
j--;
if (string[c] == NULL)
{
for (k = 0; k < c; k++)
free(string[k]);
free(string[n - 1]);
free(string);
return (NULL);
}
for (l = 0; l < j; l++)
string[c][l] = str[i + l];
string[c][l] = '\0';
c++;
i = i + j;
}
else
i++;
}
return (string);
}

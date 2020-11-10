#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *rev_string - a function that reverses a string.
 *@s : string
 *
 */
void rev_string(char *s)
{
char *t;
int i, j, l;
if ( s == NULL)
return;
for (i = 0; s[i] != '\0'; i++)
{
}
i++;
t = malloc(sizeof(char) * i);
if (t == NULL)
return;
i--;
for (j = 0; j < i; j++)
{
t[j] = s[j];
}
j = 0;
for (l = i; l > 0; l--)
{
s[j] = t[l];
j++;
}
free(t);
}

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
int l, begin, end, length;
if (s == NULL)
return;
for (length = 0; s[length] != '\0'; length++)
{
}
t = malloc(sizeof(char) * length);
end = length - 1;
if (t == NULL)
return;
for (begin = 0; begin < length; begin++)
{
t[begin] = s[end];
end--;
}
for (l = 0; l < length; l++)
{
s[l] = t[l];
}
free(t);
s[l] = '\0';
}

#include "holberton.h"
/**
 * *cap_string - check the code for Holberton School students.
 * @c : char
 * Return: char.
 */
char *cap_string(char *c)
{
int i;
for (i = 0; c[i] != '\0' ; i++)
{
if (c[i] == ' ' || c[i] == ',' || c[i] == ';' || c[i] == '.' || c[i] == '!' || c[i] == '?' || c[i] == '"' || c[i] == '(' || c[i] == ')' || c[i] == '{' || c[i] == '}' ||c[i] == '\n' || c[i] == '\t')
{
if (c[i+1] >= 97 && c[i+1] <= 122)
{
c[i+1] = c[i+1] - 32;
}
}
}
return (c);
}

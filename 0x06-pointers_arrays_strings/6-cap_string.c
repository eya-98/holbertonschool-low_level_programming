#include "holberton.h"
/**
 * *cap_string - check the code for Holberton School students.
 * @c : char
 * Return: char.
 */
char *cap_string(char *c)
{
unsigned int i;
for (i = 0; c[i] != '\0' ; i++)
{
  if ((c[i] >= 97) && (c[i] <= 122) && ((i == 0) || c[i - 1] == ' '
|| c[i - 1] == ',' || c[i - 1] == ';' ||
c[i - 1] == '.' || c[i - 1] == '!' || c[i - 1] == '?' ||
c[i - 1] == '"' || c[i - 1] == '(' || c[i - 1] == ')' ||
c[i - 1] == '{' || c[i - 1] == '}' || c[i - 1] == '\n' || c[i - 1] == '\t'))
{
c[i] = c[i] - 32;
}
}
return (c);
}

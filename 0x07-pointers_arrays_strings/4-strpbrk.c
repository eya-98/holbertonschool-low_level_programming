#include "holberton.h"
/**
 * _strpbrk - locates the first occurrence in the string s
 *@s : char
 *@accept : char
 * Return: char or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
int j;
int k;
for (j = 0; s[j]; j++)
{
for (k = 0; accept[k]; k++)
{
if (s[j] == accept[k])
break;
}
if (s[j] == accept[k])
return (s + j);
}
return (0);
}

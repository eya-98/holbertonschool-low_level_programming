#include "holberton.h"
/**
 * *_strpbrk - searches a string
 *
 *
 *@s: string
 *@accept: string
 *
 *
 *Return: char
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int j, i;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (accept[j])
return (s + i);
}
return (0);
}

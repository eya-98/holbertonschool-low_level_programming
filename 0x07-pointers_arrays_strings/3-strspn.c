#include "holberton.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s : char
 * @accept : char
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
int j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}

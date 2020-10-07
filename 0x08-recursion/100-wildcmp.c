#include "holberton.h"
/**
 * wildcmp - a function that compares two strings 
 * @s1 : string 1
 * @s2 : string 2
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
int i = 0, j, k;
for (k = 0; s1[k] >= '\0'; k++)
{
}
for (j = 0; s2[j] >= '\0'; j++)
{
}
 while (( s2[i] == '*'|| s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
{
i++;
}
if ((i == k) || (i == j))
return (0);
else 
return (0);
}

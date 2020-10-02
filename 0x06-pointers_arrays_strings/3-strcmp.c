#include "holberton.h"
/**
 * _strcmp - check the code for Holberton School students.
 * @s1 : char;
 * @s2 : char;
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int i, j;
for (i = 0; s1[i] != '\0'; i++)
{
}
j = 0;
while (s1[j] == s2[j] && j < i)
{
j++;
}
return (s1[j] - s2[j]);
}

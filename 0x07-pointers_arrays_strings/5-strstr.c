#include "holberton.h"
/**
 * *_strstr -  a function that locates a substring.
 * @haystack : char
 * @needle : char
 * Return: a pointer to the beginning of the located substring or 0.
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; needle[i] != '\0'; i++)
{
for (j = 0; haystack[j] != '\0'; j++)
{
if (haystack[j] == needle[i])
{
return (haystack + j);
}
}
}
return ('\0');
}

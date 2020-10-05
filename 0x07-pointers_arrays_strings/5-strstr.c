#include "holberton.h"
/**
 * *_strstr -  a function that locates a substring.
 * @haystack : char
 * @needle : char
 * Return: a pointer to the beginning of the located substring or 0.
 */
char *_strstr(char *haystack, char *needle)
{
int j, i = 0;
for (j = 0; haystack[j] > '\0'; j++)
{
while ((haystack[j + i] == needle[i]) && (needle[i] != '\0'))
{
i++;
}
return (haystack + j);
}
return ('\0');
}

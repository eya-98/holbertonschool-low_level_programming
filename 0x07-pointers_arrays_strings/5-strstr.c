#include "holberton.h"
/**
 * *_strstr -  a function that locates a substring.
 * @haystack : char
 * @needle : char
 * Return: a pointer to the beginning of the located substring or 0.
 */
char *_strstr(char *haystack, char *needle)
{
int j, k, i = 0;
for (k = 0; needle[k] != '0'; k++)
{
}  
for (j = 0; haystack[j] > '\0'; j++)
{
while ((haystack[j + i] == needle[i]) && (needle[i] != '\0'))
{
i++;
}
if (i == k)
return (haystack + j);
}
return (0);
}

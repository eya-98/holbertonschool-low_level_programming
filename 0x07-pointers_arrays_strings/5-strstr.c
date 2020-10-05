#include "holberton.h"
/**
 * *_strstr -  a function that locates a substring.
 * @haystack : char
 * @needle : char
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
int i;
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
return (haystack + i);
}
return ('\0');
}

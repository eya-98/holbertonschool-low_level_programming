#include "holberton.h"
/**
 * *_strstr -  a function that locates a substring.
 * @haystack : char
 * @needle : char
 * Return: a pointer to the beginning of the located substring or 0.
 */
char *_strstr(char *haystack, char *needle)
{
int i;
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == *needle)
{
return (haystack + i);
}
}
return ('\0');
}

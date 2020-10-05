#include "holberton.h"
/**
 * *_strstr -  a function that locates a substring.
 * @haystack : char
 * @needle : char
 * Return: a pointer to the beginning of the located substring or 0.
 */
char *_strstr(char *haystack, char *needle)
{
int j;
for (j = 0; haystack[j] > '\0'; j++)
{
if (haystack[j] == needle[0])
{
return (haystack + j);
}
}
return(haystack + 1);
}

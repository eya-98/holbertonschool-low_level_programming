#include "holberton.h"
/**
 * *_strchr -  locates a character in a string
 * @s : string
 * @c : char
 * Return: 0 or the occurence of c.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
else
s++;
}
return (s + 1);
}

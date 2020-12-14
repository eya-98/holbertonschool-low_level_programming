#include "holberton.h"
/**
 * *_strchr - locate a charachter in a string
 *
 *@s: string
 *@c: charachter we're looking for
 *
 *
 *Return: s
 */
char *_strchr(char *s, char c)
{

while (*s >= '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (0);
}

#include "holberton.h"
/**
 * *_memset - prints buffer in hexa
 * @s: pointer
 * @b: char
 * @n: unsigned int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i <= n; i++)
{
s[i] = b;
}
return (s);
}

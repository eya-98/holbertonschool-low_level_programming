#include "holberton.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
int n = 0;
if (*s != '\0')
{
n = _strlen_recursion(s + 1);
n++;
}
return (n);
}

#include "holberton.h"
/**
 * _puts_recursion -  a function that prints a string
 *@s : string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
int i = 0;
if (*s != '\0')
{
_putchar(*s);
i++;
_puts_recursion(s + i);
}
else if (*s == '\0')
_putchar('\n');
return;
}

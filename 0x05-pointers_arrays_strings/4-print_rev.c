#include "holberton.h"
/**
 *print_rev - main function
 *@s: char
 *
 */
void print_rev(char *s)
{
char *n;
n = s;
while (*s != '\0')
{
s++;
}
while (*n != *s)
{
s--;
_putchar(*s);
}
_putchar('\n');
}

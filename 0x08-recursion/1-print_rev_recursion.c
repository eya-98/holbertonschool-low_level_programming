#include "holberton.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
int i, k;
char m[100];
for (i = 0; s[i] > '\0'; i++)
{
m[i] = m[i] + s[i];
}
k = i - 1; 
for (k = i - 1; k > 0; k--)
{
_putchar(s[k]);
}
_putchar('\n');
}

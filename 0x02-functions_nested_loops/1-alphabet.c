#include "holberton.h"
/**
 * print_alphabet - main function
 * description: prints the alphabet, in lowercasen
 * Return: Always 0
 */
void print_alphabet(void)
{
int i;
for (i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
_putchar('\n');
return;
}

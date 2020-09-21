#include "holberton.h"
/**
 * main - main function
 * description: prints the alphabet, in lowercasen
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
int i, m;
m = 1;
while (m <= 10)
{
for (i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
_putchar('\n');
m++;
}
return;
}


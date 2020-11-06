#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 * @str : char;
 * Return: Always 0.
 */
void puts_half(char *str)
{
int x, i, j;
i = 0;
x = 0;
if (str == NULL)
return;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
x = i / 2;
for (j = x; j < i; j++)
_putchar(str[j]);
}
else
{
x = (i - 1) / 2;
for (j = x; j < i; j++)
_putchar(str[j]);
}
_putchar('\n');
}

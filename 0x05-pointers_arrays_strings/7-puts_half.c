#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 * @str : char;
 * Return: Always 0.
 */
void puts_half(char *str)
{
  int c, x, i;
  x = 0;
  c = 0;
while (*str != '\0')
{
c++;
str++;
}
 x = c / 2;
if (c % 2 == 0)
{
for (i = x; i <= c ; i++)
_putchar(*str);
} 
else
{ 
c = c + 1; 
for (i = x; i <= c; i++)
_putchar(*str);
}
}

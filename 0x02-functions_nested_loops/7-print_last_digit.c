#include "holberton.h"
/**
 * print_last_digit - main function
 * description: print last digit of an integer
 *@r : integer
 * Return: Always n
 */
int print_last_digit(int r)
{int c;
if (r >= 0)
{
r = r % 10;
 c = '0' + r;
_putchar (c);
return (r);
}
else
{
r = 0 - r;
r = r % 10;
c = '0' + r;
return (r);
_putchar (c);
}
}

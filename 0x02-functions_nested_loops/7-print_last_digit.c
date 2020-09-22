#include "holberton.h"
/**
 * print_last_digit - main function
 * description: print last digit of an integer
 *@r : integer
 * Return: Always n
 */
int print_last_digit(int r)
{
int c;
if (r >= 0)
{
c = r % 10;
_putchar ('0' + c);
return (c);
}
else
{
c = ((r % 10) * -1);
_putchar ('0' + c);
return (c);
}
}

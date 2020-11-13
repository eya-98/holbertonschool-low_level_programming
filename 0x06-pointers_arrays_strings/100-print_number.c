#include "holberton.h"
#include <unistd.h>
/**
 * print_number - print an int
 * @n : the int 
 */
void print_number(int n)
{
int z, x, num, rest;
if (n < 0)
{
_putchar('-');
n = n * (-1);
}
num = n;
z = 10;
x = n;
if (x > 0)
{
while (x != 0)
{
z = z * 10;
x = x / 10;
}
while (num > 0)
{
num = n / z;
_putchar(num + '0');
n = n - (num *z);
z = z / 10;
}
}
rest = n % 10;
_putchar(rest + '0');
_putchar('\n');
}

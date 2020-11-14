#include "holberton.h"
#include <unistd.h>
/**
 * print_number - print an int
 * @n : the int
 */
void print_number(int n)
{
unsigned int z, num;
if (n < 0)
{
_putchar('-');
n = n * (-1);
}
num = n;
z = 1;
if (num > 0)
{
while (num / 10 != 0)
{
z = z * 10;
num = num / 10;
}
while (z > 0)
{
num = n / z;
_putchar('0' + num);
n = n - (num *z);
z = z / 10;
}
}
if (num == 0)
_putchar ('0' + num);
}

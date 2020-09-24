#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i, j;
for (j = 1 ; j <= 10 ; j++)
{
i = 1;
while (i <= 14)
{
if (i > 10)
{
_putchar('0' + i / 10);
_putchar('0' + i % 10);
}
if (i < 10)
{
_putchar('0' + i % 10);
}
i++;
}
_putchar('\n');
}
}

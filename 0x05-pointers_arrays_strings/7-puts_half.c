#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 * @str : char;
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int c, x, i;

	i = 0;
	x = 0;
	c = 0;

	while (*(str + c) != '\0')
	{
		c++;
	}
	if (c % 2 == 0)
	{
		x = c / 2;
		for (i = x; i < c ; i++)
			_putchar(str[i]);
	}
	else
	{
		x = (c - 1) / 2;
		for (i = x; i < c ; i++)
			_putchar(str[i]);
			}
	_putchar('\n');
}

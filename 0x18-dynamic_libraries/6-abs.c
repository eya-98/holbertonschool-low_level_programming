#include "holberton.h"
/**
 * _abs - main function
 *
 *@a: returns the absolute value of a number
 *
 *
 *Return: 0
 *
 */
int _abs(int a)
{
int b;
if (a < 0)
{
b = a * -1;
return (b);
}
else
return (a);
}

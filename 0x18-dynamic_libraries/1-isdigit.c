#include "holberton.h"
/**
 * _isdigit - main function
 *
 *@c: variable input
 *
 *Return: depends on the outcome of c
 *
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
return (0);
}

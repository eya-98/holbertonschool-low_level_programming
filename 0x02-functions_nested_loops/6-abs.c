B#include "holberton.h"
/**
 * _abs - main function
 * description: abs of an integer
 * Return: Always 0
 */
int _abs(int n)
{
if (n >= '0')
{
return (n);
}
else
{
n = 0 - n;
return (n);
}
}

#include "holberton.h"
/**
 * _isupper - main function
 *
 *@c: variable input
 *
 *Return: depends on the outcome of c
 *
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}

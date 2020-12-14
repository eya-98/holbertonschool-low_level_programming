#include "holberton.h"
/**
 * _islower - main function
 *
 *@c: checks if a charachter is lowercase or uppercase
 *
 *Return: depends on the charachter
 *
 *
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}

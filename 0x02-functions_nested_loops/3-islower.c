#include "holberton.h"
/**
 * _islower - main function
 * description: check if the alphabet is in lowercasen
 * @c : integer
 * Return: Always 0
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

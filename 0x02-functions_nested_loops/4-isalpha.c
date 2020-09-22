#include "holberton.h"
/**
 * _isalpha - main function
 * description: check if the alphabet is in lowercasen
 * @c : integer
 * Return: Always 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}

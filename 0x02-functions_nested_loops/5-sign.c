#include "holberton.h"
/**
 * main - main function
 * description: check if the alphabet is in lowercasen
 * Return: Always 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');    
return (1);
} 
if (n < 0)
{
_putchar('-');                                                                                                                                                         return (-1);
}
else 
{
_putchar ('0');
return (0);
}
}

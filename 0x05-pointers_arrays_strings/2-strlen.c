#include "holberton.h"
/**
 * _strlen - check the code for Holberton School students.
 *@s : integer
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i;
while (*s != '\0')
{
s++;
i++;
}
return (i);
}

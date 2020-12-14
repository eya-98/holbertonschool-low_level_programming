#include "holberton.h"
/**
 *_strlen - length of a function
 *
 *
 *@s: pointer
 *Return: int
 *
 */
int _strlen(char *s)
{
int i;
i = 0;
while (*s != '\0')
{
s++;
i++;
}
return (i);
}

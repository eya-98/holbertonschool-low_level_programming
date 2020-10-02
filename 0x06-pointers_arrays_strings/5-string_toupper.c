#include "holberton.h"
/**
 * string_toupper - check the code for Holberton School students.
 * @a :char
 * Return: char
 */
char *string_toupper(char *a)
{
int i;
for (i = 0; a[i] != '\0' ; i++)
if (a[i] >= 97 && a[i] <= 122)
{
a[i] = a[i] - 32;
}
return (a);
}

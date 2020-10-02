#include "holberton.h"
#include <stdio.h>
/**
* *leet - check the code for Holberton School students.
* @a : char
* Return: Always 0.
*/
char *leet(char *a)
{
int i, k;
char s[10];
char m[10];
s[0] = 'a';
s[1] = 'A';
m[0] = '4';
m[1] = '4';
s[2] = 'e';
s[3] = 'E';
m[2] = '3';
m[3] = '3';
s[4] = 'o';
s[5] = 'O';
m[4] = '0';
m[5] = '0';
s[6] = 't';
s[7] = 'T';
m[6] = '7';
m[7] = '7';
s[8] = 'l';
s[9] = 'L';
m[8] = '1';
m[9] = '1';
for (i = 0; a[i] != '\0'; i++)
{
for (k = 0; s[k] != '\0'; k++)
{
if (a[i] == s[k])
{
a[i] = m[k];
}
}
}
return (a);
}

#include "holberton.h"
/**
 * *rot13 - check the code for Holberton School students.
 * @a : char
 * Return: char.
 */
char *rot13(char *a)
{
int i, k;
char maj_prem[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77};
char min_p[] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
char maj_seco[] = {78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};
char min[] = {110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};
for (i = 0; a[i] != '\0'; i++)
{
for (k = 0; k <= 13; k++)
{
if (a[i] == maj_prem[k] || a[i] == min_p[k])
{
a[i] = a[i] + 13;
}
else if (a[i] == maj_seco[k] || a[i] == min[k])
{
a[i] = a[i] - 13;
}
}
}
return (a);
}

#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i = -1;
int s[100];
while (n >= 0)
{
n--;
i++;
s[i] = a[n];
}
while (i > 0)
{
i--;
a[i] = s[i];
}
}

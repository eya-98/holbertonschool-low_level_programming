#include "holberton.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
/**
 *_atoi - convert a string into an integer
 *@s: the string
 *Return: an integer
 *
 */
int _atoi(char *s)
{
unsigned int i, num, b, k;
char *t = "0123456789";
b = 0;
i = 0;
num = 0;
while (s[i] != '\0')
{
if (s[i] == '+')
i++;
else if (s[i] == '-')
{
num *= -1;
i++;
}
else
{
for (k = 0; t[k] != '\0'; k++)
{
b = 0;
if (s[i] == t[k])
{
num = (num * 10) + k;
b++;
break;
}
}
if (b == 0 && num == 0)
i++;
else if (b == 0 && num != 0)
return (num);
}
}
return (0);
}

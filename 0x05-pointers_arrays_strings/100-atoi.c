#include "holberton.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
/**
 *
 *
 *
 */
int _atoi(char *s)
{
unsigned int i, num, b, k;
char *t = "0123456789";
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
b = 0;
for (k = 0; t[k] != '\0'; k++)
{
if (s[i] == t[k])
{
num = (num * 10) + k;
b++;
break;
if (b == 0)
{
if (num == 0)
return (0);
else
return num;
}
}
}
}
}
return (0);
}

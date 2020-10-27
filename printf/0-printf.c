#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - produces output according to a format.
 * @format : const char
 */
int _printf(const char *format, ...)
{
char *input, *str;
int i;
int j = 0;
va_list valist;
va_start(valist, format);
for (i = 0; format[i]; i++)
{
if (format[i] == "%")
{
str = format[i + 1];
input = va_arg(valist, format);
switch (str)
{
case 'c':
format[i] = input;
case 's':
while (input[j] != '\0')
{
format[i] = input[j];
j++;
i++;
}
}
}
}
for (i = 0; format[i]; i++)
{
}
va_end(valist);
return (i);
}

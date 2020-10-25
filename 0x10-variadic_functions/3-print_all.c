#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all, followed by a new line
 * @format : const char
 */
void print_all(const char * const format, ...)
{
va_list valist;
int i = 0;
char c, *s, *separator = "";
va_start(valist, format);
while (format[i])
{
c = format[i];
switch (c)
{
case 'c':
printf("%s%c", separator, va_arg(valist, int));
separator = ", ";
break;
case 'i':
printf("%s%d", separator, va_arg(valist, int));
separator = ", ";
break;
case 'f':
printf("%s%f", separator, va_arg(valist, double));
separator = ", ";
break;
case 's':
s = va_arg(valist, char *);
if (!s)
s = "(nil)";
printf("%s%s", separator, s);
separator = ", ";
break;
}
i++;
}
va_end(valist);
printf("\n");
}

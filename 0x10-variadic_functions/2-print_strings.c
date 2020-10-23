#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator : const char
 * @n : const unsigned int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list valist;
char *str;
if (n == 0)
return;
va_start(valist, n);
for (i = 0; i < n ; i++)
{
if (separator != '\0' && i != 0)
printf("%s", separator);
str = va_arg(valist, char *);
if (str == '\0')
printf("(nil)");
else
printf("%s", str);
}
printf("\n");
va_end(valist);
}

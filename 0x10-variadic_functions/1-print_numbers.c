#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator : const char
 * @n : const unsigned int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list valist;
if (n == 0)
return;
va_start(valist, n);
for (i = 0; i < n - 1; i++)
{
printf("%d",va_arg(valist, int));
if (separator != '\0')
printf("%s",separator);
}
printf("%d",va_arg(valist, int));
printf("\n");
va_end(valist);
}
 

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
va_start(valist, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(valist, unsigned int));
if ((i + 1 != n) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}

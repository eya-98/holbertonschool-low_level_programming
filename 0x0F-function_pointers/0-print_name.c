#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function that prints a name
 *
 * @name : char
 * @f : pointer to a function
 *
 * Return : always 0
 */
void print_name(char *name, void (*f)(char *))
{
if (name != 0 && f != 0)
f(name);
}

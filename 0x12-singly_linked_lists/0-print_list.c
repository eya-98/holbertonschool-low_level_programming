#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h : data structure
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
int i = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[%u] (nil)\n", h->len);
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
i++;
}
return (i);
}

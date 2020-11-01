#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len -returns the number of elements in a linked
 * @h : data structure
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}

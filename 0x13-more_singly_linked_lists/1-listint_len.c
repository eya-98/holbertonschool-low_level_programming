#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h : data structure
 * Return: a size_t
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}

#include "lists.h"
/**
 *dlistint_len - returns the number of elements in a list
 *@h : list
 *Return: number of elements
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i;
i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}

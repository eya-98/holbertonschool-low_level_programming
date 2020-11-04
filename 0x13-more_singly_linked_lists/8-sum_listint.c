#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head : data structure
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
listint_t *new;
int sum;
if (head == '\0')
return (0);
new = head;
if (new == NULL)
return (0);
sum = new->n;
while (new)
{
sum = sum + new->n;
new = new->next;
}
return (sum);
}

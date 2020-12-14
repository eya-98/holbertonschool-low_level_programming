#include "lists.h"
/**
 *sum_dlistint - returns the sum of all the data
 *@head : the list
 *Return: the sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *new;
int sum;
new = head;
sum = 0;
while (new != NULL)
{
sum = sum + new->n;
new = new->next;
}
return (sum);
}
